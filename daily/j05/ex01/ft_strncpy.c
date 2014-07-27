/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 11:40:51 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/09 18:56:03 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	char	*t;

	i = -1;
	t = dest;
	while (++i < n)
		*t++ = *str++;
	return (dest);
}
