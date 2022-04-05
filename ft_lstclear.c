/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:01:14 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 02:42:37 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_1;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst && lst)
	{
		lst_1 = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_1;
	}
}
