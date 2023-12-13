/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:58:58 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/03 09:22:43 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int index;
	
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return index + 1;
}

char *ft_strdup(char *str)
{
	int index;
	int len;
	char *dup;

	len = ft_strlen(str);
	index = 0;
	dup = (char*)malloc(sizeof(*str) * (len - 1));
	if (dup == 0)
	{
		return (0);
	}
	while (str[index] != '\0')
	{
		dup[index] = str[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
