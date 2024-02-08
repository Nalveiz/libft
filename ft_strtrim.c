/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:48:42 by musozer           #+#    #+#             */
/*   Updated: 2023/10/30 17:40:35 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	search(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ilk;
	size_t	son;
	char	*s;

	if (!s1[0] || !set[0])
		return (ft_strdup(s1));
	ilk = 0;
	son = ft_strlen(s1) - 1;
	while (ilk <= son && search(set, s1[ilk]))
		ilk++;
	while (ilk < son && search(set, s1[son]))
		son--;
	if (ilk > son)
		return (ft_strdup(""));
	s = ft_substr(s1, ilk, son - ilk + 1);
	return (s);
}
