/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:16:14 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/17 12:57:38 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_puthexa_lowercase(int nb)
{
	int counter;

	counter = 0;
	else if (nb >= 16)
	{
		counter += ft_putnbrint(nb / 16);
		counter += ft_putnbrint(nb % 16);
	}
	else
		counter += ft_putchar (nb + '0');

	return (counter);
}
