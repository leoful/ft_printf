/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:54:17 by lbard             #+#    #+#             */
/*   Updated: 2024/12/05 16:28:12 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static int	ft_nbrlen(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		i = 1;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int			i;
	char		*str;
	long int	num;

	num = nb;
	i = ft_nbrlen(nb);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		i--;
		str[i] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
