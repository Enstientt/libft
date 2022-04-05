/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:10:06 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 14:56:33 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	count_delet(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		index;

	index = 0;
	if (!s1)
		return ("");
	if (!set)
		return ((char *)s1);
	while (count_delet(*s1, set))
		s1++;
	i = ft_strlen(s1);
	while (i && count_delet(s1[i - 1], set))
		i--;
	if (i == 0)
		str = (char *)malloc(sizeof(char) * 1);
	else
		str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (index++ < i)
		str[index - 1] = s1[index - 1];
	str[index - 1] = '\0';
	return (str);
}

/*int main()
{
	char bar[100] = "";
	char *ptr = bar;
	char set[20] = "fad";
	char *s1 = "\n\n\n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1, "\n\t");
	ptr++;
	printf("%s", ft_strtrim(s1, "\n\t"));
}
*/