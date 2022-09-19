/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:24:06 by marferre          #+#    #+#             */
/*   Updated: 2022/09/20 00:07:34 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
*/
static int	ft_many_words(const char *s, char c)
{
	int	mw;
	int	bln;

	mw = 0;
	bln = 0;
	while (*s)
	{
		if (*s != c && bln == 0)
		{
			bln = 1;
			mw++;
		}
		else if (*s == c)
			bln = 0;
		s++;
	}
	return (mw);
}

static char	*ft_malloc_things(char *dst, char const *s)
{
	char	*dst;

	dst = malloc(sizeof(char *) * ());
	
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		sprt;
	char	**dst;

	dst = malloc(sizeof(char *) * (ft_many_words(s, c) + 1));
	if (!s || !dst)
		return (0);
	i = 0;
	j = 0;
	sprt = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c)
			i++;
		else if (s[i] == c)
		{
			dst[j] = ft_malloc_things(dst, s);
			j++;
		}
	}
	dst[j] = NULL;
	return (dst);
}
