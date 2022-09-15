/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:30:44 by marferre          #+#    #+#             */
/*   Updated: 2022/09/13 20:39:33 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t	c;

	if (size == 0)
		return (0);
	c = 0;
	while ((((unsigned char *)str1) && ((unsigned char *)str2)) \
			&& (((unsigned char *)str1)[c] == ((unsigned char *)str2)[c]) \
			&& (c < (size - 1)))
		c++;
	return (((unsigned char *)str1)[c] - ((unsigned char *)str2)[c]);
}
