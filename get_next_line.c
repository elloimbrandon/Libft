/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 20:27:00 by maljean           #+#    #+#             */
/*   Updated: 2018/05/01 15:50:30 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_waldo(int fd, char **buff, char **line)
{
	char	*curr;
	char	*leak_protection;

	if ((curr = ft_strchr(buff[fd], '\n')))
	{
		leak_protection = buff[fd];
		*curr = '\0';
		*line = ft_strdup(buff[fd]);
		buff[fd] = ft_strdup(curr + 1);
		free(leak_protection);
		return (1);
	}
	if (*buff[fd])
	{
		*line = ft_strdup(buff[fd]);
		buff[fd] = ft_strnew(BUFF_SIZE + 1);
		return (1);
	}
	return (0);
}

int		read_size(int fd, char **buff)
{
	char		*temp;
	char		*leak_protection;
	int			bytes_read;

	temp = ft_strnew(BUFF_SIZE + 1);
	while ((bytes_read = read(fd, temp, BUFF_SIZE)) > 0)
	{
		leak_protection = buff[fd];
		buff[fd] = ft_strjoin(buff[fd], temp);
		free(leak_protection);
		buff[fd] = !buff[fd] ? ft_strdup(temp) : buff[fd];
		ft_bzero(temp, BUFF_SIZE);
	}
	free(temp);
	return (bytes_read ? 1 : 0);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*buff[4864];

	if (!line || fd < 0 || BUFF_SIZE < 0 || read_size(fd, &buff[fd]))
		return (-1);
	if (find_waldo(fd, &buff[fd], line))
		return (1);
	return (0);
}
