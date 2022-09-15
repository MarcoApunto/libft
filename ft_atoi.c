/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:34:15 by marferre          #+#    #+#             */
/*   Updated: 2022/09/13 13:26:24 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	x;
	int	y;

	c = 0;
	x = 1;
	y = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			x *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		y = (str[c] - '0') + (y * 10);
		c++;
	}
	return (x * y);
}
