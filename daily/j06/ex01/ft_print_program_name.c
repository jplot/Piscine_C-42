/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/10 18:47:54 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/10 18:48:10 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int 	main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		ft_putchar(*argv[0]);
		*argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}
