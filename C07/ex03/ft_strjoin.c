/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bcopoglu <Bcopoglu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:30:50 by Bcopoglu          #+#    #+#             */
/*   Updated: 2023/02/24 15:30:51 by Bcopoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strjoin_sup(char *ret_val, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			ret_val[len] = strs[i][j];
			j++;
			len++;
		}
		j = 0;
		while (sep[j] && i + 1 != size)
		{
			ret_val[len] = sep[j];
			len++;
			j++;
		}
		i++;
	}	
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int				i;
	unsigned int	len;
	char			*ret_val;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i + 1 != size)
			len += ft_strlen(sep);
			i++;
	}
	ret_val = malloc(sizeof(char) * (len + 1));
	ret_val[len] = 0;
	ft_strjoin_sup(ret_val, strs, sep, size);
	return (ret_val);
}
