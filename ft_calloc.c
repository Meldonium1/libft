/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:17:10 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/24 16:17:10 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_memb, size_t size)
{
	void *s;

	s = malloc(n_memb * size);
	if (s == NULL)
		return (NULL);
	else
		ft_memset(s, 0, n_memb * size);
	return (s);
}
