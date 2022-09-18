/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:24:06 by marferre          #+#    #+#             */
/*   Updated: 2022/09/18 14:59:19 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL.
*/
static int	ft_many_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	mw;

	i = 0;
	j = 0;
	mw = 0;
	while (s[i])
	{
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
			mw++;
		i++;
	}
	return (mw);
}

static char	ft_lets_split(char const **dst, char const *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(dst)
	{
		dst[i][j] = src[j];
		j++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	a2;
	size_t	i;
	size_t	j;
	char	**dst;

	if (!s)
		return (0);
	dst = malloc(sizeof(char) * (ft_many_words(s, c) + 1));
	a = 0;
	i = 0;
	while (a <= ft_strlen(s))
	{
		j = 0;
		if (s[a] != c)
		{
			a2 = a;
			dst = ft_lets_split(dst, s[a2]);
			j++;
		}
		else
			i++;
		a++;
	}
	return (dst);
}
