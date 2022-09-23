/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marferre <marferre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:24:06 by marferre          #+#    #+#             */
/*   Updated: 2022/09/23 18:01:11 by marferre         ###   ########.fr       */
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

static char	*ft_malloc_things(char const *s, int i)
{
	char	*dst;
	int		j;
	int		k;

	j = 0;
	dst = malloc(sizeof(char *) * ()));
	if (!dst)
		return (0);
	while (i > k)
	{
		dst[j] = s[k];
		k++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**dst;

	if (!s)
		return (0);
	dst = malloc(sizeof(char *) * (ft_many_words(s, c) + 1));
	if (!dst)
		return (0);
	i = 0;
	j = 0;
	while ((size_t)i <= ft_strlen(s))
	{
		if (s[i] != c && s[1])
		{
			dst[j++] = ft_malloc_things(s, i);
			if (!dst)
				return (ft_free_malloc(dst, i));
		}
		i++;
	}
	return (dst);
}

void	leaks(void)
{
	system("leaks a.out");
}

int main()
{
	char *s = "   ha  cucu   caca  sj  jax   ";
	char c = ' ';
	char **splited = ft_split(s, c);

	atexit(leaks);
	printf("%s, %s, %s, %s, %s", splited[0], splited[1], splited[2], splited[3], splited[4]);
	free(splited);
}
