/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/12 08:49:45 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/14 17:02:32 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			jp_strlen(char *str)
{
	int l;

	l = 0;
	while (*str++ != '\0')
		l++;
	return (l);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = jp_strlen(src);
	if ((cpy = malloc(sizeof(*src) * (i + 1))) == NULL)
		return (NULL);
	while (i >= 0)
	{
		cpy[i] = src[i];
		i--;
	}
	return (cpy);
}
