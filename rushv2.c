
#include "unistd.h"

void ft_print_fn(char chared)
{
  write(1,&chared,1);
}



void	ft_print_top(int squar_witdh,char corner,char center)
{
	int iterator;
	iterator = 1;
      ft_print_fn(center);
	while (++iterator  <= squar_witdh )
		{ 	
    		ft_print_fn(corner);

			}

	if(squar_witdh > 1)
	{
   		ft_print_fn(center);
	}

      		ft_print_fn('\n');
   		}


void fit_replcate_middle(int times,int widht)
{
int iterator = 0;
while(iterator < times )
{
iterator++;
ft_print_top(widht - 1,'b','a');

}
}
void rush(widht,heigh)
{
ft_print_top(widht,'a','b');
fit_replcate_middle(heigh - 2,widht);

}



int main(void)
{
	fit_replcate_middle(5,5);
}
