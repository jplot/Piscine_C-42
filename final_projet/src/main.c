/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpucelle <jpucelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/21 16:08:16 by jpucelle          #+#    #+#             */
/*   Updated: 2014/07/23 19:33:24 by jpucelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_ltos(int len, t_list *list)
{
	char	*str;
	char	*tmp;

	if ((str = (char *)malloc(sizeof(char *) * (len + 1))) == NULL)
		return (NULL);
	while (list != NULL)
	{
		ft_strcat(str, list->str);
		list = list->next;
	}
	return (str);
}

char	*ft_read_standard(void)
{
	t_list	*list;
	int		pos;
	int		len;
	char	buff[129];

	len = 0;
	while ((pos = read(0, buff, 128)))
	{
		buff[pos] = '\0';
		len += pos + 1;
		if (list == NULL)
			list = ft_create_elem(buff);
		else
			ft_list_push_back(&list, buff);
	}
	return (ft_ltos(len, list));
}

char	*ft_openfile(char *filename)
{
	t_list	*list;
	int		fh;
	char	buff[4097];
	int		pos;
	int		len;

	len = 0;
	if ((fh = open(filename, O_RDONLY)) < 0)
		return (NULL);
	while ((pos = read(fh, &buff, 4096)))
	{
		buff[pos] = '\0';
		ft_putstr(buff);
		len += pos + 1;
		if (list == NULL)
			list = ft_create_elem(buff);
		else
			ft_list_push_back(&list, buff);
	}
	close(fh);
	return (ft_ltos(len, list));
}

void	ft_check(char *str)
{
	if (str == NULL || *str == '\0')
		ft_puterr("map error\n");
	if (bsq(str) == 0)
		ft_puterr("map error\n");
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		while (*++argv != '\0')
		{
			ft_check(ft_openfile(*argv));
		}
	else
		ft_check(ft_read_standard());
	return (0);
}
