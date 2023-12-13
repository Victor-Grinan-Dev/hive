/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:19:37 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/03 19:43:20 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(char *src)
{
	int index;
	int len;

	len = 0;
	index = 0;
	while (src[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int index;
	char *big_str;
	int full_len;
	int i;
	int j;
	int len;

	index = 1;
	full_len = 0;
	while(index <= argc)
	{
		index++;
		full_len = full_len + ft_len(argv[index]);
		full_len++;
	}
	big_str = (char*)malloc(full_len);
	index = 0;
	i = 0;
	while (i < argc)
	{	
		j = 0;
		len = ft_len(argv[i]);
		while(j < len)
		{
			big_str[index] = argv[i][j];
			j++;
		}
		big_str[index] = '\n';
		index++;
		i++;
	}
	return big_str;
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	char *wtf;

	wtf = ft_concat_params(argc, argv);
	printf("%s", wtf);
	return 0;
}
