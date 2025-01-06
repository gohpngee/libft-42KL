/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 10:07:18 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-18 10:07:18 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int number)
{
	size_t	len;

	len = 0;
	if (number < 0)
		len += 1;
	if (number == 0)
		len = 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	number;
	size_t	len;

	number = n;
	len = count_len(n);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (!string)
		return (NULL);
	if (number == 0)
		string[0] = '0';
	string[len] = '\0';
	if (n < 0)
	{
		string[0] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		string[len - 1] = (number % 10) + '0';
		number /= 10;
		len--;
	}
	return (string);
}
