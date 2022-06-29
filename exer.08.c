#include <stdio.h>

int main(){
	int sexo, altura;
	printf("Sexo (1 - Masculino | 2 - Feminino): ");
	scanf("%d", &sexo);
	printf("Altura (centimetros): ");
	scanf("%d", &altura);
	
	float pesoIdeal = calcularPesoIdeal(sexo, altura);
	
	printf("Resultado: %.2f", pesoIdeal/1000);
	return 0;
}

int calcularPesoIdeal(int sexo, int altura){
	float pesoIdeal, alt = altura;

	if (sexo == 1)
		pesoIdeal = 72.7 * alt/100 - 58;
	else if (sexo == 2)
		pesoIdeal = 62.1 * alt/100 - 44.7;
		
	return pesoIdeal*1000;
}
