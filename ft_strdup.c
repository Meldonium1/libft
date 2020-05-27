/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdeirdre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:38:49 by kdeirdre          #+#    #+#             */
/*   Updated: 2020/05/24 16:38:49 by kdeirdre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dub;
	size_t		len;

	len = ft_strlen(s) + 1;
	dub = (char*)malloc(sizeof(char) * len);
	if (dub == NULL)
		return (0);
	ft_memcpy(dub, s, len);
	return (dub);
}
