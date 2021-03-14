/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 18:07:16 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/14 12:29:34 by jean-phil        ###   ########.fr       */
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
if(squar_witdh > 2)
{
	while (++iterator  <= squar_witdh )
		{ 	
    	ft_print_fn('C');
		}
}
  if (iterator != squar_witdh)
	  {	
      ft_print_fn('\n');
	  }
}
void	ft_print_middle(int squar_witdh,char corner,char middle)
{
	int iterator;
	iterator = 1;
		if(squar_witdh > 0)
	{
      ft_print_fn(corner);
	}
	
	while (iterator  <= squar_witdh)
	{
    ft_print_fn(middle);
		++iterator;
		if(iterator == squar_witdh)
		{
			ft_print_fn(corner);
		}
	}
      ft_print_fn('\n');
	  
}

void ft_print_height(int  height,int middle_widht)
{
	int iterator;
	iterator = 1;
if (height > 1 )
{

}
while (iterator++ < height - 1)
	{
    ft_print_middle(middle_widht,'e',' ');
	}		

}
void ft_print_top2(int  height,int middle_widht)
{
	int iterator;
	iterator = 1;
if (height > 1 )
{

}
while (iterator++ < heigh - 1)
	{
    ft_print_middle(middle_widht,'A','B');
	}		

}
void ft_rush(int height,int widht)
{
if(widht == 0|| height == 0)
{
ft_print_fn(' ');
}
 else if(widht  > 0){
ft_print_middle( height,'a','b');
}

if (widht  >  0)
{
ft_print_height(height,widht);
ft_print_top2( height,widht - 1);
}
}
int main(void)
{
	ft_rush(1,1);
}

