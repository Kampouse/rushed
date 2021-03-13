/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:07:16 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/13 09:00:09 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void ft_print_fn(char chared)
{
  write(1,&chared,1);
}

//we could make it a fn so we only need one fn with params ex a ' ' or b a
//
//
void	ft_print_top(int squar_witdh,char corner)
{
	int iterator;
	iterator = 1;
      ft_print_fn(corner);
	while (iterator  <= squar_witdh )
	{
    ft_print_fn('b');
		++iterator;
	}
     if(squar_witdh > 0)
	{
      ft_print_fn(corner);
	}
  if (iterator != squar_witdh)
	  {	
      ft_print_fn('\n');
	  }
}
void	ft_print_middle(int squar_witdh)
{
	int iterator;
	iterator = 1;
      ft_print_fn('b');
	while (iterator  <= squar_witdh )
	{
    ft_print_fn(' ');
		++iterator;
	}
	if(squar_witdh > 0)
	{
      ft_print_fn('B');
	}
	  
	  	
      ft_print_fn('\n');
	  
}

void ft_print_height(int  height,int middle_widht)
{
ft_print_middle(middle_widht);
if(height > 0)
{
ft_print_height(--height,middle_widht);
}
}

void ft_rush(int height,int widht)
{
ft_print_top(widht,'A');
ft_print_height(height,widht);
ft_print_top(widht,'C');
}



int main(void)
{
	ft_rush(100,100);
}
