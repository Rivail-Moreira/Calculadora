/*Calculadora 03: 
COM passagem de parâmetro por valor (o main() VAI me fornecer os valores)
SEM retorno (quem vai exibir o resultado  SÃO AS FUNÇÕES SECUNDÁRIAS)*/
#include<stdio.h>
int resto(int a, int b){
    int operacao;
    
    operacao = a%b;
    printf("\nResultado do resto dos valores lidos pelo programa principal: %d", operacao);
}
float divisao( float a, float b){
    float operacao;
              
    operacao =  a / b;
    printf("\nResultado da divisao dos valores lidos pelo programa principal: %.2f", operacao);
}
int multiplicacao(int a, int b){
    int operacao;
    
    operacao = a*b;
    printf("\nResultado da multplicacao dos valores lidos pelo programa principal: %d", operacao);
}
int subtracao(int a, int b){
    int operacao;
    
    operacao = a-b;
    printf("\nResultado da subtracao dos valores lidos pelo programa principal: %d", operacao);
}
int soma(int a, int b){
    int operacao;
    
    operacao = a+b;
    printf("\nResultado da soma dos valores lidos pelo programa principal: %d", operacao);
}


int main(){
 int num1, num2;
 
 printf("Digite o valor do primeiro numero: ");
 scanf("%d", &num1);
 
 printf("Digite o valor do segundo numero: ");
 scanf("%d", &num2);
 
 soma(num1, num2);
 subtracao(num1, num2);
 multiplicacao(num1,num2);
 divisao(num1, num2);
 resto(num1,num2);
 return(0);
}