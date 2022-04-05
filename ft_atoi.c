/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:05:27 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 10:36:11 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;
	int	i;

	sign = 1;
	nbr = 0;
	i = 0;
	while ((str[i] == '\t') || (str[i] == ' ')
		|| (str[i] == '\v') || (str[i] == '\f')
		|| (str[i] == '\r') || (str[i] == '\n'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (sign * nbr);
}
