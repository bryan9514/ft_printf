/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testVariadicFuctions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:44:21 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/11 17:34:27 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	sumatorio(int n, ...)
{
	va_list	vargs;
	int	ac = 0;
	va_start(vargs, n);

	puts ("Iniciamos argumentos");
	for (int i = 0; i < n; i++)
	{
		int	sig = va_arg(vargs,int);
		printf ("El siguiente argumento es : %d\n", sig);
		ac += sig;
	}

	puts ("Terminamos argumentos ");
	va_end(vargs);
	return (ac);
}

int	main(void)
{
	int	totalSuma = sumatorio(5, 1, 2, 3, 4, 5);
	
	printf ("Total : %d\n", totalSuma);
	return (0);
}









