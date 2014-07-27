/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/17 19:34:45 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/18 14:02:33 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h1;
	int h2;
	int hs1;
	int hs2;

	h1 = hour;
	h2 = ((hour + 1) == 24 ? 0 : (hour + 1));
	hs1 = 0;
	hs2 = 0;
	if (h1 >= 12)
	{
		h1 = h1 - 12;
		hs1 = 1;
	}
	if (h2 >= 12)
	{
		h2 = h2 - 12;
		hs2 = 1;
	}
	h1 = (h1 == 0 ? 12 : h1);
	h2 = (h2 == 0 ? 12 : h2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s. AND %d.00 %s.\n", h1,
			(hs1 == 0 ? "A.M" : "P.M"), h2, (hs2 == 0 ? "A.M" : "P.M"));
}
