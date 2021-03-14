
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
	while (++iterator  <= squar_witdh - 1)
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
int iterator = 1;
while(iterator < times )
{
iterator++;
ft_print_top(widht ,' ','|');
}
}
void rush(widht,heigh)
{

if(heigh > 0  && widht> 0)
{


if(heigh == 1  && heigh == 1)
{
ft_print_top(widht ,'-','o');
}	
else if(heigh >= 1)
{
ft_print_top(widht,'-','o');
fit_replcate_middle(heigh - 1,widht);
ft_print_top(widht,'-','o');
}
}
}
int main(void)
{
rush(5,5);


}
