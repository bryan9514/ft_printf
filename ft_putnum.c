/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:13:42 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/16 15:40:54 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_printf.h"

void	ft_putunsig(unsigned int  nb)
{
	unsigned int	c;

	if (nb > 9)
	{
		ft_putunsig(nb / 10);
		ft_putunsig(nb % 10);
	}
	else
	{
		c = nb + '0';
		ft_putchar (c);
	}
}

int	ft_putnbrint(int nb)
{
	int	c;
	int counter;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11)
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		counter++;
		ft_putnbrint(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbrint(nb / 10);
		ft_putnbrint(nb % 10);
	}
	else
	{
		c = nb + '0';
		ft_putchar (c);
		counter++;
	}
	return (counter);
}
