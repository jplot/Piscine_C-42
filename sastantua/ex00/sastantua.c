/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 16:59:59 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/06 19:02:55 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int			jp_atoi(const char *str)
{

}

void		jp_line(char b, char m, char e, int l, int s)
{
	int mi;
	int si;

	mi = 0;
	si = 0;
	while (si < s)
	{
		ft_putchar(' ');
		si++;
	}
	ft_putchar(b);
	while (mi < l)
	{
		ft_putchar(m);
		mi++;
	}
	ft_putchar(e);
	ft_putchar('\n');
}

void		jp_sastantua(int size)
{
	int i[2];
	int lastsize;
	int lvl;

	i[0] = 1;
	lastsize = 1;
	lvl = 0;
	while (i[0] <= size)
	{
		i[1] = 1;
		while (i[1] <= (i[0] + 2))
		{
			jp_line('/', '*', '\\', lastsize + lvl, lastsize * i[1]);
			lastsize += 2;
			i[1]++;
		}
		lvl += 4;
		if ((i[0]) % 2 != 0)
		{
			lvl += 2;
		}
		i[0]++;
	}
}

int			main(int argc, char *argv[])
{
	if (argc > 0)
		jp_sastantua(6);//argv[0] + '0');
	return (0);
}
