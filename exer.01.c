#include <stdio.h>

int ehPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main (){
int num;
	printf("Numero: ");
	scanf("%d", &num);
	if (ehPar(num))
		printf("O Numero eh Par");
	else
		printf("O Numero eh Impar");

	
	return 0;
}
   
    

