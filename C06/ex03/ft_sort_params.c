/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:44:42 by ffrau             #+#    #+#             */
/*   Updated: 2021/10/18 10:45:26 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

void	ft_sort(char **array, int size)
{
	int		i;
	bool	swap;

	while (true)
	{
		i = 1;
		swap = false;
		while (i < size)
		{
			if (ft_strcmp(array[i], array[i + 1]) > 0)
			{
				ft_swap(&array[i], &array[i + 1]);
				swap = true;
			}
			i++;
		}
		if (!swap)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc > 2)
		ft_sort(argv, argc - 1);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
