/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:16:14 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/18 21:39:38 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	int counter;
	unsigned long	addr;

	counter = 0;
	addr = (unsigned long)ptr;
	if (ptr == NULL)
		return (counter += ft_putstr("(nil)"));
	counter += ft_putstr("0x");
	counter += ft_puthexa_lowercase(addr);
	return (counter);
}


int	ft_puthexa_lowercase(unsigned int nb)
{
	int counter;

	counter = 0;
	if (nb >= 16)
	{
		counter += ft_puthexa_lowercase(nb / 16);
		counter += ft_puthexa_lowercase(nb % 16);
	}
	else
	{
		if (nb < 10)
			counter += ft_putchar(nb + '0');  // Dígitos '0' a '9'
		else
			counter += ft_putchar(nb - 10 + 'a');  // Letras 'a' a 'f'
	}
	return (counter);
}

int	ft_puthexa_uppercase(unsigned int nb)
{
	int counter;

	counter = 0;
	if (nb >= 16)
	{
		counter += ft_puthexa_uppercase(nb / 16);
		counter += ft_puthexa_uppercase(nb % 16);
	}
	else
	{
		if (nb < 10)
			counter += ft_putchar(nb + '0');  // Dígitos '0' a '9'
		else
			counter += ft_putchar(nb - 10 + 'A');  // Letras 'A' a 'F'
	}
	return (counter);
}
