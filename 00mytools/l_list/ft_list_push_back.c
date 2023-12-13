/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:55:01 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/10 12:26:22 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	*ft_push_back_list(t_list **begining_list, void *data)
{
	t_list *last_list;

	last_list = (t_list*)malloc(sizeof(t_list));
	last_list = ft_create_elem(data);
	(**begining_list).next = last_list;
}
