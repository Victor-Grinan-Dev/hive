/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:02:32 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/01 05:05:15 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	a)
{
	write(1, &a, 1);
}
void	ft_putstr(char	*str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
