/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 21:14:07 by maljean           #+#    #+#             */
/*   Updated: 2018/03/01 14:57:37 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*dest;
	int				start;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (SPACE)
		i++;
	start = i;
	if (s[start] == '\0')
	{
		dest = ft_strnew(0);
		dest[0] = '\0';
		return (dest);
	}
	while (s[i])
		i++;
	i--;
	while (SPACE)
		i--;
	if (!(dest = (ft_strsub(s, start, i - start + 1))))
		return (NULL);
	return (dest);
}
