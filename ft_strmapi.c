/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 20:10:56 by maljean           #+#    #+#             */
/*   Updated: 2018/02/22 20:17:56 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dest = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dest)
	{
		while (s[i])
		{
			dest[i] = f(i, s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
