/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:26:15 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:30:03 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const	char *s, int c)
{
	int		i;
	char	chr;

	i = ft_strlen(s);
	chr = (char)c;
	while (s[i] != chr && i > 0)
		i--;
	if (i == 0 && s[i] == chr)
		return ((char *)s);
	else if (s[i] != chr)
		return (NULL);
	else
		return ((char *)(s + i));
}
/*int main ()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
        char *d1 = strrchr(src, ' ');
        char *d2 = ft_strrchr(src, ' ');
	printf("%s \n%s\n", d1,d2);
}*/
