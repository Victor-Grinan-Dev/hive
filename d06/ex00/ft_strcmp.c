/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 05:36:54 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/02 08:20:47 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char word);

int	ft_strcmp(char *s1, char *s2)
{
	int len_s1;
	int len_s2;
	char *ps1;
	char *ps2;

	ps1 = s1;
	ps2 = s2;
	len_s1 = ft_strlen(ps1);
	len_s2 = ft_strlen(ps2);
	if (len_s1 < len_s2)
	{
		return (-1);
	}
	else if (lenS1 == lenS2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
