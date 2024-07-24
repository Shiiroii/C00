/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:20:42 by liulm             #+#    #+#             */
/*   Updated: 2024/07/23 23:25:27 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_num(int n)
{
	int	i;
	int	j;

	if (n > 9)
	{
		i = n / 10;
		j = n % 10;
		ft_putchar(i + '0');
		ft_putchar(j + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_num(i);
			ft_putchar(' ');
			write_num(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}


int	main()
{
	ft_print_comb2();
}
