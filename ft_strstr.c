/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:39:14 by maljean           #+#    #+#             */
/*   Updated: 2018/02/21 22:40:56 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char*)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
