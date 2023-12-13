/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:21:35 by vgrinan           #+#    #+#             */
/*   Updated: 2021/05/29 08:54:33 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int index = 1;
	int result = nb;

	if (nb == 0)
	{
		return (0);
	}
	else
	{
	
    	while (index < nb)
		{
			result = result * index;
        	index++;
		}  
    return (result);
	}
}
