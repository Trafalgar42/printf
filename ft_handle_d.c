/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:00:13 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:00:06 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_d(print *tab)
{
	int 	i;
	char *printstr;

	i = va_arg(tab->args, int);
	printstr = ft_itoa(i);
	tab->count += ft_strlen(printstr);
}
