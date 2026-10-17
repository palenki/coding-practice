/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauhenr2 <pauhenr2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 22:48:10 by pauhenr2          #+#    #+#             */
/*   Updated: 2026/10/16 23:06:34 by pauhenr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	find_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, "a", 1);
			return ;
		}
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	find_a(argv[1]);
	write(1, "\n", 1);
	return (0);
}
