/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 06:48:08 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 05:06:01 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *x;

	x = (t_btree*)malloc(sizeof(t_btree));
	if (!(x))
	{
		return (NULL);
	}
	x->data = item;
	x->btree = NULL;
	x->parent = NULL;
	x->left = NULL;
	x->right = NULL;
	return (&x);
}
