/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogerio <rogerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 05:47:09 by rogeriorslf       #+#    #+#             */
/*   Updated: 2021/08/05 10:56:16 by rogerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct t_parameters
{
	int	flags;
	int	width;
	int	precision;
	int	precision_bool;
	int	specifier;
}				t_params;

int		ft_printf(const char *input, ...);
int		ft_isvalid(t_params *parameters, char *pointer);
int		ft_convert(t_params *params, va_list args);

char	*ft_apply_specifiers(t_params *params, va_list args);
char	*ft_apply_flag(char *pointer, t_params *parameters);
char	*ft_apply_precision(char *pointer, t_params *parameters);

char	*ft_case_c(va_list args);
char	*ft_case_s(va_list args);
char	*ft_case_p(va_list args);
char	*ft_case_d(va_list args, int precision);
char	*ft_case_u(va_list args, int precision);
char	*ft_case_x(va_list args, int precision);
char	*ft_case_upperx(va_list args, int precision);

char	*ft_hextoa(unsigned long nb);
char	*ft_utoa(unsigned int n);
char	*ft_uitoa(unsigned int nb);

int		ft_move_forward(char *s);
int		ft_write_and_count(char *s, int count, int czero);
char	*ft_negfirst(char *s, t_params *params);
void	ft_czero(char *pointer, char *czero);

#endif
