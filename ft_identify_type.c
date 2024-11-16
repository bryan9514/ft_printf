/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identify_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:02:14 by brturcio          #+#    #+#             */
/*   Updated: 2024/11/16 12:16:29 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_identify_type(const char *str, int i)
{
	if (str[i] == 'd')
		return (1);
	else if (str[i] == 's')
		return (2);
	else if (str[i] == 'i')
		return (3);
	return (0);
}
