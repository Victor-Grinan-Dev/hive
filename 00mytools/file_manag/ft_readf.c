/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:05:55 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/10 20:10:19 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 8000

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

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

char	*ft_readf(char *doc)//takes a char array argv[2]
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open(doc, O_RDONLY);
	if (fd == -1)
		return ("Open() error");//todo:
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return ("Close() error");//todo:
	return ("coolio");
}

int		main(int argc, char **argv)
{
	char *data;
	if (argc == 2)
		data = ft_readf(argv[1]);
		
	return (0);
}
