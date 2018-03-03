/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgounto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:56:22 by emgounto          #+#    #+#             */
/*   Updated: 2018/02/28 19:25:27 by emgounto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char str1[n];
	char str2[n];

	ft_memmove(str1, s1, n);
	ft_memmove(str2, s2, n);
	str1[n] = '\0';
	str2[n] = '\0';
	return (ft_strcmp(str1, str2));
}
