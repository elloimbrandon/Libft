/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:32:14 by maljean           #+#    #+#             */
/*   Updated: 2018/03/01 12:38:28 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest && s)
	{
		while (i < len)
		{
			dest[i] = s[start];
			i++;
			start++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
