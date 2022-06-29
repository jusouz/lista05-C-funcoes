#include <stdio.h>

int main(){
	int compEstr, distPedagios, custoKm, valorPedagio;
	printf("Comprimento da Estrada: ");
	scanf("%d", &compEstr);
	printf("Distancia Entre Pedagios: ");
	scanf("%d", &distPedagios);
	printf("Custo por Quilometro: ");
	scanf("%d", &custoKm);
	printf("Valor do Pedagio: ");
	scanf("%d", &valorPedagio);
	
	int custo = calcularCusto(compEstr, distPedagios, custoKm, valorPedagio);
	
	printf("Custo total: %d", custo);
	return 0;
}

int calcularCusto(compEstr, distPedagios, custoKm, valorPedagio){
	int qtdPedagios = compEstr/distPedagios;
	return (qtdPedagios * valorPedagio) + (compEstr * custoKm);
}
