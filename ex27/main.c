/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:12:41 by ykopiika          #+#    #+#             */
/*   Updated: 2018/11/03 17:51:32 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_printf(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		a;
	char	buf[1];

	if (argc != 2)
	{
		if (argc < 2)
		{
			write(2, "File name missing.\n", 19);
		}
		if (argc > 2)
		{
			write(2, "Too many arguments.\n", 20);
		}
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while ((a = read(fd, buf, 1)))
		ft_printf(buf[0]);
	close(fd);
	return (0);
}
