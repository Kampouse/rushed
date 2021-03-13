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

void ft_print_fn(char chared)
{
  write(1,&chared,1);
}


void	ft_print_middle(int squar_witdh)
{


int iterator;
iterator = 0;
while(iterator++  <= squar_witdh  )
{

  if(iterator  == 0   &&  iterator  == squar_witdh)
  {
      ft_print_fn(32);

  }

  else if (iterator == squar_witdh)
  {
    ft_print_fn('\n');
  } 

    else
    {
      ft_print_fn('r');
    }

}
}


//we could make it a fn so we only need one fn with params ex a ' ' or b a
void	ft_print_top(int squar_witdh)
{
	int iterator;
	iterator = 1;
      ft_print_fn('a');
	while (iterator  <= squar_witdh )
	{
    ft_print_fn('b');
		++iterator;
	}

      ft_print_fn('a');
      ft_print_fn('\n');
}

int main(void)

{
ft_print_top(20);
ft_print_top(20);
ft_print_middle(20);
}
