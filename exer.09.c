#include <stdio.h>

int main(){
	int n1, n2, n3, freq, situacao;
	printf("Nota 1: ");
	scanf("%d", &n1);
	
	printf("Nota 2: ");
	scanf("%d", &n2);
	
	printf("Nota 3: ");
	scanf("%d", &n3);

	printf("Frequencia: ");
	scanf("%d", &freq);
	
	situacao = situacaoAluno(n1, n2, n3, freq);
	
	if (situacao == 2)
		printf("Aprovado");
	else if (situacao == 1)
		printf("De recuperacao");
	else if (situacao == 0)
		printf("Reprovado");
		
	return 0;
}
int situacaoAluno(n1, n2, n3, freq){
	float media = (n1 + n2 + n3) / 3;
	if (media >= 6 && freq >= 75) return 2;
	if (media < 6 && media >= 4 && freq >= 75) return 1;
	if (media < 4 || freq < 75) return 0;
}
