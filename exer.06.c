#include <stdio.h>



int qtdPrimos (int n){
	int cont ,qtd=0;
	for (cont=1;cont<=n;cont++){		
		if (ehPrimo(cont)==1 )
		qtd++;
	}
	
	return qtd;
}

int main(){
	int n,resp;
	printf("Informe o valor de n :");
	scanf ("%d",&n);
	resp=qtdPrimos(n);
	printf ("Qtd de primos entr 1 e %d = %d",n,resp);
	return 0;
}
