/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:43:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 13:27:34 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isconv(const char *s);

void	ft_handle(const char *s, t_sprint *tab, int i);

int	ft_printf(const char *s, ...)
{
	t_sprint	*tab;
	int			count;
	int			i;

	tab = malloc(sizeof(t_sprint));
	if (!tab)
		return (0);
	count = 0;
	i = 0;
	va_start(tab->args, s);
	while (s[i])
	{
		if (s[i] != '%')
			count += write(1, &s[i], 1);
		else
		{
			i++;
			ft_handle(s, tab, i);
		}
		i++;
	}
	count += tab->count;
	va_end(tab->args);
	free(tab);
	return (count);
}

void	ft_handle(const char *s, t_sprint *tab, int i)
{
	if (s[i] == 'c')
		ft_handle_c(tab);
	else if (s[i] == 's')
		ft_handle_s(tab);
	else if (s[i] == 'p')
		ft_handle_p(tab);
	else if (s[i] == 'd')
		ft_handle_d(tab);
	else if (s[i] == 'i')
		ft_handle_i(tab);
	else if (s[i] == 'u')
		ft_handle_u(tab);
	else if (s[i] == 'x')
		ft_handle_x(tab);
	else if (s[i] == 'X')
		ft_handle_xmaj(tab);
	else if (s[i] == '%')
		ft_handle_percent(tab);
	else
		tab->count += write(1, &s[i], 1);
}

// int	ft_isconv(const char *s)
// {
// 	return (*s == 'c' || *s == 's' || *s == 'p' || *s == 'd' || *s == 'i'
// 		|| *s == 'u' || *s == 'x' || *s == 'X' || *s == '%');
// }
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
