/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:27:06 by ykopiika          #+#    #+#             */
/*   Updated: 2018/10/29 14:27:12 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s1;

	i = 0;
	while (src[i] != '\0')
		i++;
	s1 = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	if (s1)
		return (s1);
	else
		return (0);
}
