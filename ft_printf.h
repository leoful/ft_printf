/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:22:10 by lbard             #+#    #+#             */
/*   Updated: 2024/11/15 19:22:10 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_format_x(char str, va_list ap);
unsigned int	ft_format_u(int nb);
char			*ft_itoa(int n);
int				ft_print_p(void *ptr);

#endif