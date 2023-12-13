/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 07:50:47 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/10 16:25:33 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char	*str)
{
	int result;
	int index;
	int sign;

	result = 0;
	index = 0;
	
	while(str[0] != '\0') 
	{
		if (str[0] == '-')
		{
			sign = -1;
			index++;
		}
		else if (str[0] == '+')
		{
			sign = 1;
			index++;
		}
		else if (str[0] == ' ' || str[0] == 0)
		{
			index++;
		}
		if (str[index] < '0' || str[index] > '9')
		{
			break;
		}
		result = result * 10 + str[index] - '0';
		index++;
	}
	result = result * sign;
	return result;
}
