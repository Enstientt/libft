/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:29:37 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 02:13:20 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*subs_0(void);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		index;
	size_t		total;

	index = 0;
	total = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (subs_0());
	while ((total < len) && s[total + start])
		total++;
	str = (char *)malloc(sizeof(char) * total + 1);
	if (!str)
		return (NULL);
	while (index < total && s[start + index])
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

char	*subs_0(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
	return (str);
}
/*int	main()
{
	char b[50] = "";
	printf("the result  is %s", ft_substr(b, 4,0 ));
}*/
