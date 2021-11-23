/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolceromano <dolceromano@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:07:21 by tromano           #+#    #+#             */
/*   Updated: 2021/11/23 20:28:54 by dolceromano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_handle_s(print *tab)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(tab->args, char *);
	if (str == 0)
		str = "(null)";
	while (str[i])
	{
		tab->count += write (1, &str[i], 1);
		i++;
	}
}
