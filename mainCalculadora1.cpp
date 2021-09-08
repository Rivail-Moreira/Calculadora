/*Calculadora 01
SEM passagem de parametro por valor main nao vai fornecer o valor*/

#include<stdio.h>
#include<stdlib.h>

int resto(){
printf("-------Calculando o resto da divisao--------\n");
    int result,num1, num2;
printf("Informar o primerio valor:");
scanf("%d",&num1);
printf("Informar o primerio valor:");
scanf("%d",&num2);

result = num1 % num2;
printf("O valor do resto da divisao: %d\n\n",result);
}

int divisao(){
printf("-------Calculando a divisao--------\n");
    float num1, num2, result;
printf("Informar o primerio valor:");
scanf("%f",&num1);
printf("Informar o primerio valor:");
scanf("%f",&num2);

result = num1 / num2;
printf("O valor da multiplicacao: %.2f\n\n",result);
}

int multiplicacao(){
printf("-------Calculando a Multiplicacao--------\n");
    int num1, num2, result;
printf("Informar o primerio valor:");
scanf("%d",&num1);
printf("Informar o primerio valor:");
scanf("%d",&num2);

result = num1 * num2;
printf("O valor da multiplicacao: %d\n\n",result);
}

int subtracao(){
printf("-------Calculando a Subtracao--------\n");
    int num1, num2, result;
printf("Informar o primerio valor:");
scanf("%d",&num1);

printf("Informar o primerio valor:");
scanf("%d",&num2);

result = num1 - num2;
printf("O valor da subtracao: %d\n\n",result);
}

int soma(){
printf("-------Calculando a Soma--------\n");
    int num1, num2, result;
printf("Informar o primerio valor:");
scanf("%d",&num1);

printf("Informar o primerio valor:");
scanf("%d",&num2);

result = num1 + num2;
printf("O valor da soma: %d\n\n",result);
}

int main(){
soma();
subtracao();
multiplicacao();
divisao();
resto();


system("pause");
}
