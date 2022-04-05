/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:36:23 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:38:29 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		size;
	int		index;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (s1[index])
	{
		str[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		str[ft_strlen(s1) + index] = s2[index];
		index++;
	}
	str[size] = '\0';
	return (str);
}
/*int main()
{
	char s1[50] = "the free world is comming to its end ";
	char s2[50] = "standing against the villans would be insane";
	printf("the resu; %s %d", ft_strjoin(s1,s2), i);
}*/
