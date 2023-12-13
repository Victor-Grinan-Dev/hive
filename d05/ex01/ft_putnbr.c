/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 12:29:15 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/01 10:21:16 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{ 
	write(1, &c, 1);
}
void	ft_putnbr(int	nb)
{
	int last;
	int next;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = 147483648;
			ft_putchar('2');
		}
		else
		{
			nb = -1 * nb;
		}
	}
	if ((nb % 10) >= 1)
	{
		last = nb % 10;
		next = nb / 10;
		nb = last + '0';
		ft_putnbr(next);
		ft_putchar(nb);
	}
}
