/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 09:49:41 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-05 09:49:41 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*p;
	unsigned char	value;
	int				i;

	p = s;
	i = 0;
	value = (unsigned char)c;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (s);
}
