/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:51:50 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 00:04:29 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelem;

	newelem = (t_list *)malloc(sizeof(newelem));
	if (!newelem)
		return (NULL);
	newelem->content = content;
	newelem->next = NULL;
	return (newelem);
}
