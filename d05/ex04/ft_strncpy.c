/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 05:51:38 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/01 08:31:09 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(chae *dest, char *src, unsigned int n)
{
	char *ret_dest;
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
	}
	ret_dest = dest; 
	return (ret_dest);
}
