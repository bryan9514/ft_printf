/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbiblio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:08:49 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/14 17:08:50 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <stdio.h>

int		sumaEdades(int n, ...)
{
	va_list args;
	int sig;
	int	i;
	int total;
	va_start(args, n);

	i = 0;
	total = 0;
	sig = 0;
	while (i < n)
	{
		sig = va_arg(args, int);
		printf ("La edad n %d es de : %d\n", (i + 1), sig);
		total += sig;
		i++;
	}
	va_end(args);
	return (total);

}

int		main(void)
{
	int		x;

	x = sumaEdades(5,   1, 2, 3, 4, 5);
	printf ("La suma de las edades es %d\n", x);
	return (0);
}
