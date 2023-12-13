/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 05:02:14 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/02 16:15:02 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy(char *dest, char *src)
{
	int index;
	char *ret_dest;

	index = 0;
	while (*src[index] != '\0' && *dest[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (dest[index] != '\0')
	{
		dest[index] = '\0';
		index++;
	}
	ret_dest= dest;
	return (ret_dest);
}
