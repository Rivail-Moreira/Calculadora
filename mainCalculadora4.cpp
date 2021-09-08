/*Calculadora 04: 
COM passagem de parâmetro por valor (o main() VAI me fornecer os valores)
COM retorno (quem vai exibir o resultado É A FUNÇÃO PRINCIPAL, OU SEJA, 
AS FUNÇÕES SECUNDÁRIAS REALIZAM AS OPERAÇÕES)*/

#include <stdio.h>
int resto(int x, int y){
    int operacao;
    operacao = x % y;
    return (operacao);  //retorna o resultado da operacao para o programa principal
}
float divisao(float x, float y){
    float operacao;
    operacao = x / y;
    return (operacao);  //retorna o resultado da operacao para o programa principal
}

int multiplicacao(int x, int y){
    int operacao;
    operacao = x * y;
    return (operacao);  //retorna o resultado da operacao para o programa principal
}
int subtracao(int x, int y){
    int operacao;
    operacao = x - y;
    return (operacao);  //retorna o resultado da operacao para o programa principal
}

int soma(int x, int y){
    int operacao;
    operacao = x + y;
    return (operacao);  //retorna o resultado da operacao para o programa principal
}

int main(){
    int num1,num2, resultado;
    float resultado1;
    printf("Digite o primeiro o numero: ");
    scanf("%d",&num1); //Testado com o número 7 
    printf("Digite o segundo o numero: ");
    scanf("%d",&num2);//Testado com o número 2
    resultado = soma(num1,num2);
    printf("O resultado da soma dos numeros lidos e: %d",resultado);
    resultado = subtracao(num1,num2);
    printf("\nO resultado da subtracao dos numeros lidos e: %d",resultado);
    resultado = multiplicacao(num1,num2);
    printf("\nO resultado da multiplicacao dos numeros lidos e: %d",resultado);
    resultado1 = divisao(num1,num2);
    printf("\nO resultado da divisao dos numeros lidos e: %.2f",resultado1);
    resultado = resto(num1,num2);
    printf("\nO resultado da resto dos numeros lidos e: %d",resultado);

    return 0;
}