/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 00:19:20 by musozer           #+#    #+#             */
/*   Updated: 2023/10/30 17:43:19 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(const char *s, char c)
{
	int	i;
	int	sayac;

	sayac = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			i++;
			sayac++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (sayac);
}

static int	ft_wordlen(char const *s, char c, int start)
{
	int	i;

	i = 0;
	while (s[start] != c && s[start])
	{
		start++;
		i++;
	}
	return (i);
}

static char	*ft_atama(char const *s, char c, int start)
{
	int		i;
	int		j;
	char	*dest;

	j = 0;
	i = start;
	dest = malloc(sizeof(char) * (ft_wordlen(s, c, start) + 1));
	if (!dest)
		return (0);
	while (s[i] && s[i] != c)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**a;

	i = 0;
	j = -1;
	if (!s)
		return (0);
	a = malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!a)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
			a[++j] = ft_atama(s, c, i);
		while (s[i] != c && s[i])
			i++;
	}
	a[++j] = NULL;
	return (a);
}
