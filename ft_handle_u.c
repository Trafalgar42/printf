/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:52:52 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 15:41:24 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_u(t_sprint *tab)
{
	char			*strprint;
	unsigned int	num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_unsigned(num);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
	free(strprint);
}
