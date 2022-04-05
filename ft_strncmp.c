/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:44:53 by zessadqu          #+#    #+#             */
/*   Updated: 2021/11/29 04:07:44 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] -(unsigned char)s2[i]);
}
/*int main()
{
	 char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
        char *s2 = "\x12\x02";
        size_t size = 6;
        int i1 = strncmp(s1, s2, size);
        int i2 = ft_strncmp(s1, s2, size);
		printf("%d %d ",i1,i2);
}
*/