/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:48:57 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/10 18:49:07 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int 	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i++ < argc - 1)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			*argv[i]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
