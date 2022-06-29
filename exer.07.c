#include <stdio.h>

int main(){
 int qtd; 
 printf("digite a quantidade: ");
 scanf("%d", &qtd);
 printf("Valor soma: %d\n", soma(qtd));
 return 0;
}
int soma(int n){
 	int soma = 0, cont;
	for (cont = 0; cont < n; cont++){
		int num;
		printf("Numero: ");
		scanf("%d", &num);
		soma += num;
	}

	return soma;
 
}
