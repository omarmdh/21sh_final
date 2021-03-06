/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommadhi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 13:04:48 by ommadhi           #+#    #+#             */
/*   Updated: 2019/04/22 13:05:47 by ommadhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *str, char c)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (str[0] != c)
		j++;
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			j++;
		i++;
	}
	return (j);
}
