/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 07:45:05 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/09 07:39:27 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int		i;
	int		j;
	char	*arr;
	int		count;

	if (tab)
	{
		while (tab[i] != '\0')
		{
			arr = tab[i];
			if (f(arr) == 1)
			{
				j = 0;
				while (arr[j] != '\0')
				{
					count++
				}
				return (count);
			}
			i++;
		}
	}
	return (0);
}
