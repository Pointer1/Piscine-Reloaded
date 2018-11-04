/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:17:43 by ykopiika          #+#    #+#             */
/*   Updated: 2018/10/29 14:19:26 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ftp(int n, char **str)
{
	int i;
	int j;

	j = 1;
	while (j < n)
	{
		i = 0;
		while (str[j][i] != '\0')
		{
			ft_putchar(str[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ftp(argc, argv);
	return (0);
}
