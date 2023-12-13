/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:24:19 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/12 08:35:05 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int set_rows(int levels)//piramid level from top down
{
	int total_rows;
	int index;
	

	index = 1;
	total_rows = 3;
	while (index <= levels)
	{
		total_rows = total_rows + index + 2;
		index++;
	}
	return (total_rows + 1);
}

void print_rows (int max_row)
{
	int row;
	int space;
	int col, stop_col;
	int print_count;
	int level;

	print_count = 0;
	row = 1;
	level = 1;
	while(row <= max_row)
	{
		if (row != level + 2)
		{
		space = 1;
		while(space <= (max_row - row))
		{
			ft_putchar(' ');
			space++;
		}
		ft_putchar('/');
		col = 1;
		stop_col = (2 * row - 1);
		while(col <= stop_col)
		{
			ft_putchar('*');
			print_count++;
			col++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		row++;
	}
}


void	sastantua(int levels)
{
	int max_row;
	
	max_row = set_rows(levels);
	print_rows (max_row);
	
}



int		main(void)
{
	
	sastantua (5);
	
	return (0);
}