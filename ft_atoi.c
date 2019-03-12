/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:34:43 by maljean           #+#    #+#             */
/*   Updated: 2018/03/01 15:52:14 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] == ' ') || (nptr[i] == '\n') || (nptr[i] == '\t') ||
			(nptr[i] == '\v') || (nptr[i] == '\r') || (nptr[i] == '\f'))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = (nb * 10) + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
}
