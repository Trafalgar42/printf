/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_min_un.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:46:38 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 16:18:34 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenleen_base_min_un(unsigned int n, int base)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / base;
	}
	return (len);
}

char	*ft_convert_base_min_un(unsigned int n, size_t l, char *s, int b)
{
	while (n > 0)
	{
		if (n % b > 9)
			s[l--] = 87 + (n % b);
		else
			s[l--] = 48 + (n % b);
		n = n / b;
	}
	return (s);
}

char	*ft_itoa_base_min_un(unsigned int n, int base)
{
	size_t				len;
	unsigned int		num;
	char				*str;

	len = ft_lenleen_base_min_un(n, base);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = n * -1;
	}
	else
		num = n;
	str = ft_convert_base_min_un(num, len, str, base);
	return (str);
}
