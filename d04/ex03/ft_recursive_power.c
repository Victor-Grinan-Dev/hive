/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 08:45:57 by vgrinan           #+#    #+#             */
/*   Updated: 2021/05/29 09:20:13 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int pow)
{
	int result;

	if (nb != 0 && pow >= 1)
	{
		result = (nb * ft_recursive_power(nb, pow - 1));
		return (result);
	}
	else
	{
		return (1);
	}
}
