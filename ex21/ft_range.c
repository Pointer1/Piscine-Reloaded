/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:28:25 by ykopiika          #+#    #+#             */
/*   Updated: 2018/10/29 14:29:03 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	a = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	if (a)
		return (a);
	else
		return (0);
}
