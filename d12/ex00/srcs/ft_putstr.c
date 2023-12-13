/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:02:32 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/10 07:42:08 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mylib.h"

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
