/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:49:02 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/03 11:57:13 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *array;
	int index;

	index = 0;
	array = (int*)malloc(sizeof(int) * (max - min));
	if ( min >= max)
	{
		return (int*)0;
	}
	while(index < (max - min))
	{
		array[index] = min + index;
		index++;
	}
	array[index] = '\0';
	return (array);
}