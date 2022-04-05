/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:12:44 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 00:12:28 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	j;

	j = (int) len ;
	if (dst > src)
	{
		j--;
		while (j >= 0)
		{
			*(char *)(dst + j) = *(char *)(src + j);
			j--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
