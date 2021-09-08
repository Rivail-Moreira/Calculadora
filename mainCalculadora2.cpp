/*Calculadora 2*/
#include<stdio.h>
#include<stdlib.h>
int resto(){
  int a, b, resultado;; 
   
  printf("\n........Calculado o resto.........");
  printf("\nDigite o primeiro valor: ");
  scanf("%d",&a);
  printf("Digete o segundo valor: ");
  scanf("%d",&b);
  resultado = a % b;
return(resultado);
}
float divisao(){
float a, b, resultado;
  printf("\n.......Calculado a divisao.......");
  printf("\nDigite o primeiro valor: ");
  scanf("%f",&a);
  printf("Digite o segundo valor: ");
  scanf("%f",&b);
  resultado = a / b;
return(resultado);
}

int multiplicacao(){
  int a, b, resultado;
  printf("\n.......Calculado a multiplicacao.......");
  printf("\nDigite o primeiro valor: ");
  scanf("%d",&a);
  printf("Digite o segundo valor: ");
  scanf("%d",&b);
  resultado = a*b;
return(resultado);
}

int subtracao(){
  int a, b, resultado;
  printf("\n......Calculado a subtracao......");
  printf("\nDigite o primeiro valor:");
  scanf("%d",&a);
  printf("Digite o segundo valor: ");
  scanf("%d",&b);
  resultado = a-b;
return(resultado);
}

int soma(){
  int a, b, resultado;    
  printf(".....Calculado a soma.....");
  printf("\nDigite o primeiro valor: ");  
  scanf("%d",&a);  
  printf("Digite o segundo valor: "); 
  scanf("%d",&b);  
  resultado = a+b;  
 return(resultado);
}


int main(){
    
 int x; 
 float div;   
 x=soma();//recebe todo resulta da funcao soma
 printf("Resultado da Soma de dois valores apresentado pelo programa princial: %d",x);
 x=subtracao();//recebe todo resulta da funcao subtracao
 printf("Resultado da Subtracao de dois valores apresentado pelo programa princial: %d",x);
 x=multiplicacao();//recebe todo resltado da funcao multiplicacao
 printf("Resultado da multiplicacao de dois valores apresentado pelo programa principal: %d", x);
 div = divisao();
 printf("Resultado da divisao de dois valores apresentado pelo programa principal: %.2f", div);
 x=resto();
 printf("Resultado da resto de dois valores apresentado pelo programa principal: %d", x);

printf("\n\n");
system("pause");
 return(0);
}
