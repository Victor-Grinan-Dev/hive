/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 06:11:08 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/03 08:42:44 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char *ft_strdup(char *src)
{
	int index;
	int len;
	char *str;

	index = 0;
	len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (len - 1));
	if (src == 0)
	{
		return (0);
	}
	while ((str[index] = src[index]) != '\0')
	{
		index++;
	}
	return (str);
}
