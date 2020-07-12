#include <stdio.h>

void ft_div_mod(int a,int b, int *div,int *mod){

	*div=a/b;
	*mod=a%b;

}

int main(){
	
	int a =4;
	int b =2;
  int	div = a/b;
  int	mod = a%b;

	ft_div_mod(a,b,&div,&mod);
;
	printf("%d", div);
	printf("%d", mod);

return 0;
}
