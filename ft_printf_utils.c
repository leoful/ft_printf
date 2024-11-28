/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbard <lbard@student.42nice.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:54:17 by lbard             #+#    #+#             */
/*   Updated: 2024/11/28 22:21:46 by lbard            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countnbr_base(int nb, int base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0 && base == 10)
		i = 1;
	while (nb > 0)
	{
		nb /= base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int nb, int base, char MAJ_or_min)
{
	char	*str;
	int		i;
	int		stash;

	i = ft_countnbr_base(nb, base);
	str = malloc(i + 1);
	str[i] = '\0';
    if (nb < 0)
    {
        nb = -nb;
        str[0] = '-';
    }
	while (nb > 0)
	{
		i--;
		stash = nb % base;
		if (stash < 10)
			str[i] = stash + '0';
		else if (MAJ_or_min == 'a')
			str[i] = stash - 10 + 'a';
		else if (MAJ_or_min == 'A')
			str[i] = stash - 10 + 'A';
		nb /= base;
	}
	return (str);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
