/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 06:48:08 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 06:35:34 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *x;

	x = (t_list*)malloc(sizeof(t_list));
	if (!(x))
	{
		return (NULL);
	}
	x->data = data;
	x->next = NULL;
	return (x);
}
