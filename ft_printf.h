/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tromano <tromano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:37:47 by tromano           #+#    #+#             */
/*   Updated: 2021/11/24 16:25:30 by tromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct sprint
{
	va_list	args;
	int		count;
}		t_sprint;

char		*ft_itoa_base(unsigned int n, int base);
char		*ft_itoa_unsigned(unsigned int n);
char		*ft_itoa(int n);
int			ft_printf(const char *s, ...);
char		*ft_itoa_base_min(unsigned long long n, int base);
char		*ft_itoa_base_min_un(unsigned int n, int base);
void		ft_handle_c(t_sprint *tab);
void		ft_handle_d(t_sprint *tab);
void		ft_handle_i(t_sprint *tab);
void		ft_handle_p(t_sprint *tab);
void		ft_handle_percent(t_sprint *tab);
void		ft_handle_s(t_sprint *tab);
void		ft_handle_u(t_sprint *tab);
void		ft_handle_x(t_sprint *tab);
void		ft_handle_xmaj(t_sprint *tab);
void		ft_putchar(const char *s);
void		ft_putstr(char *str);
int			ft_strlen(const char *str);
#endif