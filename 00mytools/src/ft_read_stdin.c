/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:07:50 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/13 16:15:51 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mylib.h"
#include <unistd.h>

#define BUF_SIZE 4096

char	*ft_strjoin(char *str1, char *str2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);

	i = 0;
	while (i < len1)
	{
		res[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		res[len1 + i] = str2[i];
		i++;
	}
	res[len1 + i] = '\0';
	return (res);
}

char	*read_input(void)
{
	int		r;
	char	buf[BUF_SIZE + 1];
	char	*str;

	str[0] = '\0';
	while ((r = read(0, buf, BUF_SIZE)))//fd, returns how many chars that line contains. as long as this array goes
	{
		buf[r] = '\0';
		str = ft_strjoin(str, buf);
		str = ft_strjoin(str, "\0");
	}
	return (str);
}