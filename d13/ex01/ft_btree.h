/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:54:28 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 05:08:44 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct		s_btree
{
	struct s_btree	*parent;
	struct s_btree	*left;
	struct s_btree	*right;
	void			*data;
}					t_btree;
#endif
