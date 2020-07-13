#include <unistd.h>
#include <stdio.h>



int ft_strlen(char *str){

    

	int i;
	
	i = 0;
	while(str[i] !='\0')
	{
	//	ft_putchar(i)
		i++;
	}
	return (i);
	
}

