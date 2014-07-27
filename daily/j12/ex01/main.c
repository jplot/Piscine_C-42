/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 14:37:09 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/17 19:24:40 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		ft_cat(char *filename)
{
	int		fh;
	char	buf[129];
	int		len;

	if ((fh = open(filename, O_RDONLY)) == -1)
		return (errno);
	while ((len = read(fh, buf, 128)))
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fh);
	return (0);
}

void	ft_puterr(char *name, char *file, int no)
{
	if (no != 0)
	{
		ft_putstr(name);
		ft_putstr(": ");
		ft_putstr(file);
		ft_putstr(": ");
		if (no == ENOENT)
			ft_putstr("No such file or directory\n");
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc >= 2)
	{
		while (argv[i])
		{
			ft_puterr(argv[0], argv[i], ft_cat(argv[i]));
			i++;
		}
		return (0);
	}
	else
	{
		ft_putchar('\\');
		return (1);
	}
}
