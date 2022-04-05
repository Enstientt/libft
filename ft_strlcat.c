/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:06:18 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:21:38 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_src;
	size_t	i;
	size_t	size_des;

	i = 0;
	size_src = ft_strlen(src);
	size_des = ft_strlen(dst);
	if (dstsize == 0)
		return (size_src);
	if (dstsize <= size_des)
		return (dstsize + size_src);
	while (src[i] && i < dstsize - size_des - 1)
	{
		dst[i + size_des] = src[i];
		i++;
	}
	dst[i + size_des] = '\0';
	return (size_src + size_des);
}
/*
size_t main(){
  char s1[10] = "ouhammi";
  char s2[10]= "zero";
	size_t j;
	char s3[10] = "ouhammi";
	char s4[10] = "zero";
  prsize_tf("%d \n", strlcat(s1, s2, 1));
  prsize_tf("s2 =%s\n",s1);
     prsize_tf("%d \n", ft_strlcat(s3, s4, 1));
  prsize_tf("%s",s3);
  return 0;
}*/
