#include <stdio.h>

void ft_swap(int *a, int *b){

		int k =*a;
		*a=*b;
		*b=k;

}

int main(){

  int a , b;

  a=5;
  b=8;

  ft_swap(&a,&b);
  


  printf("a now : %d\n",a);
  printf("b now : %d\n",b);



	return 0;

}
