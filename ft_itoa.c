/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musozer <musozer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:21:51 by musozer           #+#    #+#             */
/*   Updated: 2023/10/30 17:42:11 by musozer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long n)
{
	long	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*sayi;
	long	len;
	long	nb;

	nb = (long)n;
	len = ft_len(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	sayi = malloc(sizeof(char) * (len + 1));
	if (!sayi)
		return (0);
	if (nb < 0)
	{
		sayi[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		sayi[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	sayi[ft_len(n)] = '\0';
	return (sayi);
}
