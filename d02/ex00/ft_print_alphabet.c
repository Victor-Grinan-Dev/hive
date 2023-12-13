/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 07:51:40 by vgrinan           #+#    #+#             */
/*   Updated: 2021/05/29 08:54:22 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(void){
	int index = 0;
	char str[] ="abcdefghijklmnopqrstuvwxyz";

	while (str[index] != '\0')
	{
		putchar(str[index]);
		index++;
	}
}


