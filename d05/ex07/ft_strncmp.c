/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 05:36:54 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/02 06:50:52 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned n)
{
	int index;
	int lenS1;
	int lenS2;
	char *ps1;
	char *ps2;
	
	ps1 = s1;
	ps2 = s2;
	index = 0;
	lenS1 = 1;
	while(ps1[index] != '\0' || index < n)
	{
		lenS1++;
		index++;
	}
	index = 0;
	lenS2 = 1;
	while(ps2[index] != '\0' || index < n)
	{
		lenS2++;
		index++;
	}
	if(lenS1 < lenS2)
	{
		return (-1);
	}
	else if( lenS1 == lenS2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}