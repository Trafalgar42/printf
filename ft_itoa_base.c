/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:23:31 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 16:25:04 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenleen_base(unsigned int n, int base)
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

char	*ft_convert_base(unsigned int num, size_t len, char *str, int base)
{
	while (num > 0)
	{
		if (num % base > 9)
			str[len--] = 55 + (num % base);
		else
			str[len--] = 48 + (num % base);
		num = num / base;
	}
	return (str);
}

char	*ft_itoa_base(unsigned int n, int base)
{
	size_t				len;
	unsigned int		num;
	char				*str;

	len = ft_lenleen_base(n, base);
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
	str = ft_convert_base(num, len, str, base);
	return (str);
}

// int	main()
// {
// 	printf("%s\n", ft_itoa_base(27, 16));
// 	printf("%s\n", ft_itoa_base(27, 10));
// 	printf("%s\n", ft_itoa_base(300, 16));
// 	printf("%s\n", ft_itoa_base(300, 10));
// 	printf("%s\n", ft_itoa_base(789, 16));
// 	printf("%s\n", ft_itoa_base(789, 10));
// 	printf("%s\n", ft_itoa_base(57, 16));
// 	printf("%s\n", ft_itoa_base(57, 10));

// 	printf("%s\n", ft_itoa_base(27, 2));
// 	printf("%s\n", ft_itoa_base(27, 10));
// 	printf("%s\n", ft_itoa_base(300, 2));
// 	printf("%s\n", ft_itoa_base(300, 10));
// 	printf("%s\n", ft_itoa_base(789, 2));
// 	printf("%s\n", ft_itoa_base(789, 10));
// 	printf("%s\n", ft_itoa_base(57, 2));
// 	printf("%s\n", ft_itoa_base(57, 10));
// }
