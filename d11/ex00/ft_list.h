/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:54:28 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/10 08:23:52 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H__
# define __FT_LIST_H__

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif