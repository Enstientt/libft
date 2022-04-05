/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:02:13 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 10:39:35 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;
	char	*s1;

	i = 0;
	chr = (char)c;
	s1 = (char *)s;
	while (s[i] && s[i] != chr)
		i++;
	if (chr == '\0')
		return ((char *)(s + i));
	if (!s[i])
		return (NULL);
	else
		return ((char *)(s1 + i));
}

/*int main()
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    char *d1 = strchr(src, '\0');
    char *d2 = ft_strchr(src, '\0');
	printf("%s\n %s", d1, d2);
}*/
