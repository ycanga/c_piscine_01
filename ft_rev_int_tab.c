#include<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

void		ft_rev_int_tab(int *tab, int size)
{
	int variable;
	int a;
	int length[size];
	
	a = 0;
	variable = size - 1;
	while(variable >= 0)
	{
		length[a] = tab[variable];
		variable--;
		a++;		
	}
	
	a = 0;
	while(a < size)
	{
		tab[a] = length[a];
		a++;
	}
}
