/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:54:55 by vgrinan           #+#    #+#             */
/*   Updated: 2021/05/29 08:54:38 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int factorial;

	if (nb == 1)
	{
		return (1);
	}
	else
	{
		factorial = nb * ft_recursive_factorial(nb - 1);
	}
	return (factorial);
}
