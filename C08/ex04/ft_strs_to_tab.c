/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterribi <tterribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:44:20 by tterribi          #+#    #+#             */
/*   Updated: 2022/01/22 13:59:58 by tterribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_str_copy(char *str)
{
	char	*s;
	int		i;

	s = malloc(ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str	*lst;

	if (!*av)
		return (NULL);
	lst = malloc(sizeof(t_stock_str) * ac + 1);
	if (!lst)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		lst[i].size = ft_strlen(av[i]);
		lst[i].str = av[i];
		lst[i].copy = ft_str_copy(av[i]);
	}
	lst[i].copy = 0;
	lst[i].size = 0;
	lst[i].str = 0;
	return ((struct s_stock_str*)lst);
}
