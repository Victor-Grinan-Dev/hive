/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:17:17 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 05:45:23 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int index;
	int *range;

	if (min >= max)
	{
		return (int*)0;
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	index = 0;
	while (min < max)
	{
		range[index] = min;
		index++;
		min++;
	}
	range[index] = '\0';
	return (range);
}
