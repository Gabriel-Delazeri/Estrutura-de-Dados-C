/* 

A linguagem C é adequada a programação estruturada.

Características da linguagem C: portabilidade, modularidade,
compilação separada, código eficente etc.

Linguagem Compilada de Médio Nivel com compatibilidade multiplatafomra.

Todo programa C inicia com a função main().
Necessita o uso de ; no final das execuções. */

#include <stdio.h>

int main()
{
    printf("Função Calculo consumo: \n");
    calculoconsumo();

    printf("Função testeIf: \n");
    testeIf();

    printf("Função calculoFatorial \n");
    calculofatorial();

    printf("Função calculoFatorialFor \n");
    calculofatorialfor();

    printf("Função calculoFatorialWhile \n");
    calculofatorialdowhile();

    printf("Meu primeiro programa em C");
    return 0;
}

// printf saida de valores seguindo formato -> printf(formato, argumentos);

// scanf captura e armazena valores fornecidos pelo teclado.

/*
Operadores:

b=a++ é equivalente a b=a 
                      a=a+1

b=++a é equivalente a a=a+1 
                      b=a

*/

/* Conversão de tipo
    o programador pode explicitamente requisitar uma conversão de tipo
    através do uso do operador de molde de tipo, exemplo:

    int a, b; a = (int) 3.5; // converteria o 3.5 para um inteiro
    b = (int) 3.5 % 2;      // converteria o resto de 3.5 para um inteiro
*/

/*
scanf

%c            -> char
%d            -> int
%u            -> unsigned int
%f, %e, %g    -> float
%lf, %le, %lg -> double
%s            -> cadeia de caracteres (string)

O operador & retorna o endereço de uma variavel.

para lermos um inteiro.

int n;
scanf("%d", &n);
 
o que esse código faz:
1 - scanf escaneia a entrada do teclado, 
2 - especifica como inteiro usando %d 
3 - atribui a variavel n utilizando o operador &

*/

int calculoconsumo()
{
    float CM, DIST, VOL;
    printf("Algoritmo para calcular o consumo.");
    printf("Distância total percorrida (Km): ");
    scanf("%f", &DIST);
    printf("\nVolume de combustível gasto (L): ");
    scanf("%f", &VOL);
    CM = DIST/VOL;
    printf("Consumo médio =%10.2f Km/1\n", CM);
    return 0;
}

/*
Decisões com IF

O if é o comando básico de decisão em C

exemplos:

if (expr) {
    execução
} else {
    execução
}

caso tenha apenas um comando:

if(expre)
    comando1;
else 
    comando2;

*/

void testeIf() 
{
    int a, b;
    printf("Digite dois numeros inteiros:");
    scanf("%d%d", &a, &b);
    if( (a%2 == 0) && (b%2 == 0))
        printf( "Você digitou dois números pares! \n");
}

/*
Operador condicional(ou operador ternário)

maximo = a > b ? a : b;

é a mesma coisa que:

if (a > b) {
    maximo = a;
} else {
    maximo = b;
}

Seleção:

Além do else-if, o C provê o comando switch

switch (nome da variavel)
{
    case 1:
        executa algo;
        break;
    case 2:
        executa algo;
        break;
    default:
        executa algo caso não seja nem case 1 nem case 2;
        break;
}

Laços

While -> Enquanto

while (expr) {
    bloco de comandos
}

*/

int calculofatorial() {
    int i; int n; int f = 1;
    printf("Digite um número inteiro não negativo:");
    scanf("%d", &n);
    /* calcula fatorial */ i = 1;
    while (i <= n) {
        f *= i;
        i++;
    }

    printf("Fatorial de = %d \n", f);

    return 0;
}

/*
for(expr inicial, expr booleana, expr de incremento)
{
    bloco de comandos;
}
*/

int calculofatorialfor() {
    int i; int n;
    int f = 1;

    printf("Digite um número inteiro não negativo");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        f *= i;
    }

    printf(" Fatorial = %d \n", f);

    return 0;
}

/*
do while:

do {
    bloco de comandos;
} while (condição/ exprbooleana);
*/

int calculofatorialdowhile()
{
    int i; int n;
    int f = 1;
    do {
        printf("Digite um valor inteiro não negativo: ");
        scanf("%d", &n);
    } while (!n);
    for (i = 1; i <= n; i++) 
        f *= i;
    printf(" Fatorial = %dXn", f); 

    return 0;
}

