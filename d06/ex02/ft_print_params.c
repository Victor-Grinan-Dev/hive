/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:59:59 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/03 08:09:21 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
void	ft_print_params(int argc, char **argv)
{
	int index;

	index = 0;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
}
	