/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zessadqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:29:17 by zessadqu          #+#    #+#             */
/*   Updated: 2021/12/08 01:01:52 by zessadqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(fd, "-2147483648", 11);
		}
		else
		{
			write(fd, "-", 1);
			nb = nb * (-1);
		}
	}
	if (nb <= 9 && nb >= 0)
	{
		c = nb + 48;
		write(fd, &c, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}

/*int main()
{
	ft_putnbr_fd(57578, 1);
}*/
