/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:10:06 by marferre          #+#    #+#             */
/*   Updated: 2022/09/15 11:23:42 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = -1;
	while (++i < len)
		dest[i] = s[(start - 1) + i];
	dest[i] = '\0';
	return (dest);
}
