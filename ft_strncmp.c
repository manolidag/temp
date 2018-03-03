/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgounto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:56:22 by emgounto          #+#    #+#             */
/*   Updated: 2018/03/03 15:22:00 by emgounto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char str1[n + 1];
	char str2[n + 1];

	ft_strncpy(str1, s1, n);
	ft_strncpy(str2, s2, n);
	str1[n] = '\0';
	str2[n] = '\0';
	return (ft_strcmp(str1, str2));
}
