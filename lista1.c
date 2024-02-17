#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01 () {
    printf ("joão paulo");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02 () {
    printf ("resultado: %d\n", 30*27);
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03 () {
  int num1 = 5;
  int num2 = 8;
  int num3 = 12;
  float media = (5+8+12)/3.0;
  printf ("media de %d %d %d = %2.f\n", num1, num2, num3, media);
}
//4. Faça um programa que leia e imprima um número inteiro.
void q04 () {
    int numero;
    printf ("digite um numero inteiro: ");
    scanf ("%d", &numero);
    printf ("o numero digitado é: %d\n", numero);
}
//5. Faça um programa que leia dois números reais e os imprima.
void q05 () {
float num1;
float num2;
printf ("digite dois numeros reais:");
scanf ("%f %f", &num1, &num2);
printf ("os múmeros digitados foram: %f, %f", num1, num2);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06 () {
   int num, ant, suc;
   printf ("digite um numero:");
   scanf ("%d", &num);
   ant=num-1;
   suc=num+1;
   printf ("o numero que você digitou foi: %d\n. O antecessor é %d\n. O sucessor é %d\n", num, ant, suc); 
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07 () {
    char nome[50], endereco[70], telefone[14];
    
    printf ("nome: ");
    scanf (" %50[^\n]", &nome);
    printf ("endereço: ");
    scanf (" %70[^\n]", &endereco);
    printf ("telefone: ");
    scanf (" %14[^\n]", &telefone);
    printf ("nome: %s\nEndereco: %s\ntelefone: %s\n", nome, endereco, telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08 () {
    int num1, num2, sub;
    printf ("digite dois numeros inteiros:");
    scanf ("%d %d", &num1, &num2);
    sub= num1-num2;
    printf ("o numero que você digitou foi: %d %d\n. A subtração deles é %d\n", num1, num2, sub);
}
//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q09 () {
    float num, num1;
    printf ("digite um numeros real:");
    scanf ("%f", &num);
    num1= num-4.0;
    printf ("os múmero digitado foi: %f. O ¼ deste número é: %f\n", num, num1);
}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10 () {
    int num1, num2, num3, mediarit;
    printf ("digite três numeros inteiros:");
    scanf ("%d %d %d", &num1, &num2, &num3);
    mediarit= num1+num2+num3/3.0;
     printf ("o numero que você digitou foi: %d %d %d\n. A média aritmética destes números é %d\n", num1, num2, num3, mediarit);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11 (){
    float num1, num2, soma, sub, mult, div;
    printf ("digite dois numeros reais:");
    scanf ("%f %f", &num1, &num2);
    soma= num1+num2;
    sub= num1-num2; 
    mult= num1*num2;
    div= num1/num2;
    printf ("os múmeros digitados foram: %f %f\n. A soma é %f\n. A subtração é %f\n. A multiplicação é %f\n. A divisão é %f\n", num1, num2, soma, sub, mult, div);
}
//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12 () {
    float num1, quadrado;
    printf ("digite um numeros real:");
    scanf ("%f", &num1); 
    quadrado= num1*num1;
     printf ("o múmero digitado foi:%f\n.O quadrado é %f\n", num1, quadrado);
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
 void q13 () {
      float num1, quadrado;
 }
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main () {
    q12();

    return EXIT_SUCCESS;
}