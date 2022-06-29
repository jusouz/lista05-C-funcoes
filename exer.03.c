#include <stdio.h>
int fatorial(int n){
 int resposta = 1, cont;
	for (cont = 1; cont <= n; cont++)
		resposta *= cont;
	return resposta;
}
int main(){
 int num;
	printf("Numero: ");
	scanf("%d", &num);
	printf("Resultado: %d", fatorial(num));
	return 0;
} 
