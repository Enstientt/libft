/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:32:42 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:29:13 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

size_t	check_equi(const char *str1, const char *str2, size_t len)
{
	while (*str1 && *str2 && len)
	{
		if (*str1 != *str2)
			return (0);
		str1++;
		str2++;
		len--;
	}
	if (*str2 == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	if (!*to_find)
		return ((char *)str);
	while (*str && len)
	{
		if (*str == *to_find && check_equi(str, to_find, len) == 1)
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
/*size_t main()
{
      	char haystack[30] = "aaabcabcd";
	     char needle[10] = "aabc";
       // char *i1 = strnstr(haystack, needle, -1);
        char *i2 = ft_strnstr(haystack, needle,-1);
  //  printf("%s \n", i1);
    printf("%s", i2);
}*/
