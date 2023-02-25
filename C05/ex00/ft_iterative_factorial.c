/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bcopoglu <Bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 22:50:47 by Bcopoglu          #+#    #+#             */
/*   Updated: 2023/02/20 23:11:29 by Bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}
