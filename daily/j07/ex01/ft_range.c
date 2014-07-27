/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 16:17:29 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/14 17:44:03 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *t;
	int m;

	if (min >= max)
		return (NULL);
	m = max - min - 1;
	if ((t = (int *)malloc(sizeof(int) * m)) == NULL)
		return (NULL);
	m++;
	while (m > min)
		t[m--] = m;
	return (t);
}
