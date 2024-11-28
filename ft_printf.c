/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:49:26 by lbard             #+#    #+#             */
/*   Updated: 2024/11/15 18:49:26 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_printf(const char *str, ...)
{
    va_list ap;
    int i;
    int count;

    va_start(ap, str);
    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] != '%')
        {
            ft_putchar(str[i]);
            count++;
        }
        else
        {
            i++;
            count += ft_format(str[i], ap);
        }
        i++;
    }
    va_end(ap);
    return (count);
}

int main()
{
	char	*s;

	s = "s";
    printf("Function prinntf :\n");
	printf("pour un c : %c\n", 67);
	printf("pour un s : %s\n", s);
	//printf("pour un p : %p\n", s);
	printf("pour un d : %d\n", 123);
	printf("pour un u : %u\n", -5);
	printf("pour un x : %x\n", 123);
	printf("pour un x : %X\n", 123);
	printf("pour un i : %i\n", 123);

    ft_printf("My_function ft_printf :\n");
    ft_printf("pour un c : %c\n", 67);
	ft_printf("pour un s : %s\n", s);
	//ft_printf("pour un p : %p\n", s);
	ft_printf("pour un d : %d\n", 123);
	ft_printf("pour un u : %u\n", -5);
	ft_printf("pour un x : %x\n", 123);
	ft_printf("pour un x : %X\n", 123);
	ft_printf("pour un i : %i\n", 123);
	return (0);
}
