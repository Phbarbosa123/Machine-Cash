// CashMachine //
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtdNotasCem, qtdNotasCinquenta, qtdNotasVinte, qtdNotasDez, i, saque, resto;
    float valor;
    float notasDisp[4] = {100.00,50.00,20.00,10.00};
    printf("Notas Disponiveis: ");
    for(i = 0; i<=3; i++) {
        printf("%.2f ",notasDisp[i]);
    }
    printf("\nDigite o valor que deseja sacar: ");
    scanf("%f", &valor);

    if(valor == NULL){
        printf("Erro de valor nulo");
        return 0;
    }

    if(valor < 0){
        printf("Erro de valor invalido");
        return 0;
    }
    if((int)valor %100!=0 && (int)valor %50!=0 && (int)valor %20!=0 && (int)valor %10!=0 || valor - floor(valor) > 0 && valor - floor(valor) < 1){
        printf("Erro de notas indisponiveis");
        return 0;
    }

    qtdNotasCem = floor(valor/100);
    valor = (int)valor%100;

    qtdNotasCinquenta = floor(valor/50);
    valor = (int)valor%50;

    qtdNotasVinte = floor(valor/20);
    valor = (int)valor%20;

    qtdNotasDez = floor(valor/10);
    valor = (int)valor%10;

    printf("[");
    for(int i = 0; i < qtdNotasCem; i++) {

        if(i+1 >= qtdNotasCem  && qtdNotasCinquenta <= 0 && qtdNotasVinte <= 0 &&  qtdNotasDez <= 0){
            printf("100.00");
        } else {
            printf("100.00, ");
        }

    }

    for(int i = 0; i < qtdNotasCinquenta; i++) {

        if(i+1 >= qtdNotasCinquenta && qtdNotasVinte <= 0 &&  qtdNotasDez <= 0){
            printf("50.00");
        } else {
            printf("50.00, ");
        }
    }
    for(int i = 0; i < qtdNotasVinte; i++) {

        if(i+1 >= qtdNotasVinte &&  qtdNotasDez <= 0 ) {
            printf("20.00");
        } else {
            printf("20.00, ");
        }
    }
    for(int i = 0; i < qtdNotasDez; i++) {

        if(i+1 >= qtdNotasDez ) {
            printf("10.00");
        } else {
            printf("10.00, ");
        }
    }
    printf("]");

    return 0;
}


