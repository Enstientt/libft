/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:08:53 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:48:05 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1 && src[i] != '\0' && dstsize != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*nt main()
{
	char dst[20];
	char src[30] = "right the way";
	printf("%d", ft_strlcpy(dst, src, 5));
		printf("%d", strlcpy(dst, src, 5));

}*/
