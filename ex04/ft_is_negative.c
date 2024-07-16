/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:13:28 by liulm             #+#    #+#             */
/*   Updated: 2024/07/16 14:23:19 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

int	main()
{
	ft_is_negative(-2846);
	ft_is_negative(-1);
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(2846);
}
