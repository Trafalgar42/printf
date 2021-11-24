/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:07:21 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 13:28:18 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_s(t_sprint *tab)
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
