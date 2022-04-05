/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:58:55 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 00:59:31 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!len)
		return (b);
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}
