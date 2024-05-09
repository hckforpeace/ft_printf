/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 02:13:14 by pierre            #+#    #+#             */
/*   Updated: 2024/05/09 18:14:34 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

typedef struct s_disp
{
	int	flag;
	int	precision;
	int	format;
}		t_disp;

int		ft_printf(const char *str, ...);
int		displayer(const char *str, va_list valist);
int		disp_formats(va_list valist, t_disp frm);
int		format_x(long u, int c, t_disp data);
int		is_match(char c, char *match);
void	to_hex(unsigned long nbr, int (*f)(int));
int		format_s(char *str, t_disp data);
int		format_p(void *p, t_disp data);
int		numb_len(long num, int base);
int		numb_len_ul(unsigned long num, int base);
int		format_d_i(long nbr, t_disp data, int is_neg);
int		format_u(long l, t_disp data);
int		displayer_aux(int n, va_list valist, t_disp data);
int		next_disp(const char *str);
t_disp	init_disp(const char *str);
int		disp_padding(t_disp data, int padding, int is_neg);
int		disp_space(int precision);
int		disp_str_n(char *str, int precision);
int		format_c(char c, t_disp data);
int		next_disp(const char *str);
int		get_format(const char *str);

#endif
