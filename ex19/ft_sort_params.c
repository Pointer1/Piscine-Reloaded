/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:24:36 by ykopiika          #+#    #+#             */
/*   Updated: 2018/10/29 20:12:57 by ykopiika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		b;
	char	*t;

	i = 1;
	b = 1;
	if (argc > 2)
	{
		while (argv[i + 1] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				t = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = t;
				i = 0;
			}
			i++;
		}
		while (b < argc)
			ft_putstr(argv[b++]);
	}
	else if (argc == 2)
		ft_putstr(argv[i]);
}
