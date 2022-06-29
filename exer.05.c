#include <stdio.h>

int ehPrimo (int num){
	int div;
	for (div=2;div<num;div++){
		if (num%div==0)
		return 0;
	}
	return 1;
}
int main (){
	int num;
	do(1){
		print ("Entre com um numero:");
		scanf ("%d",&num);
		if(ehPrimo(num)==1)
		printf("%d eh primo!\n",num);
		else
		printf ("%d nao eh primo\n",num);
		printf ("Continua?[1-sim  |   0-nao]\n");
		scanf ("%d",&continua);
	}while(continua==1);
	return 0;
}
