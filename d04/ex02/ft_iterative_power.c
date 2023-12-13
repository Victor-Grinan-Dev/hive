/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 08:12:27 by vgrinan           #+#    #+#             */
/*   Updated: 2021/05/29 09:32:30 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int pow)
{
	int result;
	int iter;

	result = nb;
	iter = 1;
	while (iter < pow)
	{
		result = result * nb;
		iter++;
	}
	
	return (result);
}
