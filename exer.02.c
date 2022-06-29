#include <stdio.h>
int potencia(int base, int expo){
int cont,resposta=1;
for(cont=0;cont<expo;cont++)
resposta*=base;
    return resposta;
}

int main(){
    int resposta,base,expo;
    printf("Informe um valor da base: ");
    scanf("%d",&base);
    printf("Informe um valor expo: ");
    scanf("%d",&expo);
    resposta=potencia(base,expo);
    printf("%d\n",resposta);
    return 0;
}
