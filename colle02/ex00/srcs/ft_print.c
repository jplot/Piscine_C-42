/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbufnoir <rbufnoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 22:20:24 by rbufnoir          #+#    #+#             */
/*   Updated: 2014/07/20 22:55:11 by rbufnoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show(int nb, int arg1, int arg2, int test)
{
	if (test == 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar(nb + '0');
	ft_putstr("] [");
	ft_putchar(arg1 + '0');
	ft_putstr("] [");
	ft_putchar(arg2 + '0');
	ft_putstr("]\n");
}

int		ft_test_tab(int *tab)
{
	int i;

	while (i < 5)
	{
		if (tab[i] == 1)
			return (1);
		i++;
	}
	return (0);
}
