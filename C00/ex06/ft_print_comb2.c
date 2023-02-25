/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bcopoglu <Bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:51:26 by Bcopoglu          #+#    #+#             */
/*   Updated: 2023/02/06 17:01:44 by Bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write (1, &x, 1);
}

void	ft_print_result(int i, int j, int k, int l)
{
	k = i;
	while (k <= 9)
	{
		l = j + 1;
		while (l <= 9)
		{
			ft_putchar(i + '0');
			ft_putchar(j + '0');
			ft_putchar(' ');
			ft_putchar(k + '0');
			ft_putchar(l + '0');
			if (i != 9 || j != 8)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			l++;
		}
		k++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = i;
			while (k <= 9)
			{
				ft_print_result(i, j, k, l);
				k++;
			}
			j++;
		}
		i++;
	}
}
