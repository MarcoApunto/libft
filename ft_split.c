/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:24:06 by marferre          #+#    #+#             */
/*   Updated: 2022/09/22 23:29:29 by marferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static char	**ft_free_malloc(char **dst, int i)
{
	while (--i >= 0)
		free(dst[i]);
	free(dst);
	return (0);
}

static char	*ft_malloc_things(char const *s, int sprt, int i)
{
	char	*dst;
	int		j;

	j = 0;
	dst = malloc(sizeof(char *) * (i - sprt));
	if (!dst)
		return (0);
	while (i > sprt)
	{
		dst[j] = s[sprt];
		sprt++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		sprt;
	char	**dst;

	dst = malloc(sizeof(char *) * (ft_many_words(s, c) + 1));
	if (!s || !dst)
		return (0);
	i = 0;
	j = 0;
	sprt = -1;
	while ((size_t)i <= ft_strlen(s))
	{
		if (s[i] != c && sprt < 0)
			sprt = i;
		else if (s[i] == c && sprt >= 0)
		{
			dst[j++] = ft_malloc_things(s, sprt, i);
			if (!dst)
				return (ft_free_malloc(dst, i));
			sprt = -1;
		}
		i++;
	}
	return (dst);
}
/*
void	ft_leaks(void)
{
	system("leaks a.out");
}

int main()
{
	char *s = "   ha  cucu   caca  sj  jax   ";
	char c = ' ';
	char **splited = ft_split(s, c);

	//atexit(ft_leaks);
	printf("%s, %s, %s, %s, %s", splited[0], splited[1], splited[2], splited[3], splited[4]);
	free(splited);
}
*/