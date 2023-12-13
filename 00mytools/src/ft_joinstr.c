/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_joinstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:24:17 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/13 16:24:20 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char *str1, char *str2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);

	i = 0;
	while (i < len1)
	{
		res[i] = str1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		res[len1 + i] = str2[i];
		i++;
	}
	res[len1 + i] = '\0';
	return (res);
}