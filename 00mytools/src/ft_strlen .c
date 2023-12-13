/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 05:44:33 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/02 08:22:00 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int len;
	int index;

	index = 0;
	len = 1;
	while (str[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}