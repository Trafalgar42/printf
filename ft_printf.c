/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 18:13:48 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_isconv(const char *s);

int	ft_handle(const char *s, va_list va_lst);

int	ft_printf(const char *s, ...)
{
	va_list	lst;
	int		count;

	count = 0;
	va_start(lst, s);
	while (*s)
	{
		if (*s != '%')
		{
			ft_putchar(s);
			s++;
			count++;
		}
		else
		{
			s++;
			if (ft_isconv(s))
			{
				//ft_handle(s, lst);
				count = ft_handle(s, lst);
			}
		}	
	}
	va_end(lst);
	return (count);
}

int	ft_isconv(const char *s)
{
	return (*s == 'c' || *s == 's' || *s == 'p' || *s == 'd' || *s == 'i'
		|| *s == 'u' || *s == 'x' || *s == 'X' || *s == '%');
}

int	ft_handle(const char *s, va_list lst)
{
	if (*s == 'c')
		return (ft_handle_c(va_arg(lst, const char *)));
	else if (*s == 's')
		return (ft_handle_s(va_arg(lst, char *)));
	else if (*s == 'p')
		return (ft_handle_p(va_arg(lst, void *)));
	else if (*s == 'd')
		return (ft_handle_d(va_arg(lst, int)));
	else if (*s == 'i')
		return (ft_handle_i(va_arg(lst, int)));
	else if (*s == 'u')
		return (ft_handle_u(va_arg(lst, unsigned int)));
	else if (*s == 'x')
		return (ft_handle_x(va_arg(lst, int)));
	else if (*s == 'X')
		return (ft_handle_xmaj(va_arg(lst, int)));
	else if (*s == '%')
		return (ft_handle_percent(va_arg(lst, int)));
	else
		return (0);
}

// int	main(void)
// {
// 	char	*str = "holohlo";
// 	ft_printf("bloblo %s", str);
// 	ft_printf("blabli %s bloblo %d boubou %X");
// 	ft_printf("blabli %s bloblo %d boubou %X");
// 	ft_printf("blabli %s bloblo %d boubou %X");
// 	ft_printf("blabli %s bloblo %d boubou %X");
// 	ft_printf("blabli %s bloblo %d boubou %X");
// 	ft_printf("blabli %s bloblo %d boubou %X");
// 	ft_printf("blabli %s bloblo %d boubou %X");
// }
