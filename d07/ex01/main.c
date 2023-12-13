/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:35:28 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/03 11:59:28 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(int argc, char **argv)
{
	int *result;
	int index;
	int max;
	int min;

	if (argc <= 1)
	{
		printf("no valid parameter entered");
		return(0);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	result = ft_range(min, max);
	index = 0;
	while (result[index] != '\0')
	{
		printf("%d", result[index]);
		index++;
	}
	printf("%c",'\n');
	free(result);
	return (0);
}