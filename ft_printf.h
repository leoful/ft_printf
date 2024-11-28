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
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *str, ...);
int  ft_format(char str, va_list ap);
int ft_strlen(char *str);
void    ft_putchar(char c);
char    ft_putstr(char *str);
char	*ft_itoa_base(int nb, int base, char MAJ_or_min);

#endif