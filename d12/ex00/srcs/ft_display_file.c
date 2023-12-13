/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 07:41:09 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/11 09:52:01 by vgrinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mylib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

char	*ft_readf(char *doc)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(doc, O_RDONLY);
	if (fd == -1)
		return ("Open() error");
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0'; //stop character.
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return ("Close() error");
	return ("end of line");
}

void	ft_display_file(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(ft_readf(argv[1]));
	}
	else if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
}
