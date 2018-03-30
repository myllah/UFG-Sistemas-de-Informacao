//1. Composição Inteira
 
#include<stdio.h>
main(){
    int n1;
    int n2;
    int n3;
 
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
 
    int n = n1*100 + n2*10 + n3;
 
    if(n1/10 >0 || n2/10 >0 || n3/10 >0){
 
        printf("DIGITO INVALIDO");
 
    } else {
 
        printf("%d, %d", n, n*n);
 
    }
}

/*
Escreva um algoritmo em Linguagem C que leia três números inteiros separados (n1, n2, n3) e calcule
o número inteiro correspondente à concatenação dos três números lidos, de modo que n1 seja a centena, n2
a dezena e n3 a unidade. O programa deve apresentar o número calculado e também o seu quadrado. Caso
n1, n2 ou n3 tenham mais que 1 dígito, o programa deve apresentar a mensagem: "DIGITO INVALIDO"e
encerrar a execução. O valor de saída não deve ter zeros à esquerda.
            Entrada
O programa deve ler 3 números inteiros.
            Saída
O programa deve imprimir uma linha contendo o número resultado da composição dos três números
inteiros e seu quadrado separados por vírgula e um espaço.
*/