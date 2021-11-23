/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_xmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:26:50 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:22:30 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_xmaj(print *tab)
{
	char	*strprint;
	int		num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_base(num, 16);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
}
