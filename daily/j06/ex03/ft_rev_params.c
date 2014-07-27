/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:49:22 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/10 19:06:16 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int 	main(int argc, char *argv[])
{
	int i;

	i = argc;
	while (i-- > 1)
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
