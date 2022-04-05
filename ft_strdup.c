/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:21:54 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:14:37 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	while (i < (int)ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr [i] = '\0';
	return (ptr);
}

/*int main()
{
	char str[10] = "freecw";
	ft_strdup(str);
}*/