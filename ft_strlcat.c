/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:46:26 by marferre          #+#    #+#             */
/*   Updated: 2022/09/12 18:32:33 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	ldst;
	size_t	lsrc;

	c = 0;
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (size < (ldst + 1))
		return (lsrc + size);
	while ((src[c] != '\0') && (c < (size - ldst - 1)))
	{
		dst[c + ldst] = src[c];
		c++;
	}
	dst[c + ldst] = '\0';
	return (lsrc + ldst);
}
