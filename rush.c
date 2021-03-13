/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:07:16 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/12 19:25:44 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_widht(int squar_witdh)
{
	char	corner;
	char	iterator;
	char	height;
	char	space;
	iterator = 0;
	space = '\n';
	height = 'b';
	corner = 'a';
	while (iterator <= squar_witdh )
	{
		if(iterator == 0  || iterator == squar_witdh) 
		{	
			write(1, &corner, 1);
			write(1, &height, 1);
		}
		else {
			write(1, &height, 1);

		}
		++iterator;
	}
}

int main(void)

{
ft_print_widht(20);

ft_print_widht(20);
}
