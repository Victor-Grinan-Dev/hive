/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:25:22 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/08 18:00:04 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *arr;

	if (tab)
	{
		arr = (int*)malloc(sizeof(int) * length);
		i = 0;
		while (i < length)
		{
			arr[i] = f(tab[i]);
			i++;
		}
		return (arr);
	}
}
