/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:43:50 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/10 12:25:21 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	*ft_list_push_front(t_list **begining_list, void *data)
{
	t_list	*new_element;

	new_element = (t_list*)malloc(sizeof(t_list));
	new_element = ft_create_elem(data);
	*new_element->next = begining_list;
}
