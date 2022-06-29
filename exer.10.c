#include <stdio.h>

int main(){
	int notas[5], cont;
	
	for (cont = 0; cont < 5; cont++){
		float nota;
		printf("Nota %d: ", cont + 1);
		scanf("%f", &nota);
		nota *= 10;
		int notaInt = nota;
		notas[cont] = notaInt;
	}
	
	float soma = calcularMedia(notas);
	soma /= 10;
	printf("Resultado: %.1f", soma);

	return 0;
}

int calcularMedia(int notas[5]){
	int menor = 100, maior = 50, soma = 0;
	int cont;
	for (cont = 0; cont < 5; cont++){
		int nota = notas[cont];
		if(nota < menor)
			menor = nota;
		if(nota > maior)
			maior = nota;
	}
	
	for (cont = 0; cont < 5; cont++){
		soma+=notas[cont];
	}
	
	soma -= menor;
	soma -= maior;

	return soma;
}
