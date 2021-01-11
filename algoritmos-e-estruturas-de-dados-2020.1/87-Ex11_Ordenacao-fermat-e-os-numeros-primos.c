#include <stdio.h>

int primo(int nPrimo){
    int i=1, div=0;
    while (i<= nPrimo) {
        if(nPrimo%i==0) div++;
        i++;
	}
    if (div==2) {
        return 1;
    } else {
        return 0;
    }

}

void fermath(int n, int *vetor, int maior){

    int i,m,cont=0,resultado=0,primos=0,j=0;
    int vet[maior];

    for(i=1;i<=maior;i++){
        resultado = primo(i);
        if(resultado == 1){
            vet[primos] = i;
            primos++;
        }
    }

     for(i=0;i<primos;i++){

        //   printf("%d ", vet[i]);

    }
    while(j < primos){
        for(i=1;i<primos;i++){
            for(m=primos;m>=0;m--){
                resultado = (i*i) + (m*m);

                if((resultado == vet[j]) && (resultado != vet[cont-1])){
                    vet[cont] = vet[j];
                   // printf("%d-%d = %d <----> %d\n",i,m ,resultado,vet[j]);
                    // printf("%d ", vet[cont]);
                    cont++;

                }
            }
        }
        j++;
    }
    j=0;
    while(j < n){
        if((j+1) % 2 ==0){
             for(i=cont-1;i>=0;i--){
               if(vet[i] < vetor[j]){
                    printf("%d ", vet[i]);
               }
            }
            printf("\n");
        }else{
            for(i=0;i<cont;i++){
              if(vet[i] < vetor[j]){
                    printf("%d ", vet[i]);
               }
            }
            printf("\n");
        }
    j++;
    }


}

int main (){

    int n,maior=-1,i;
    scanf("%d", &n);
    int vetor[n];
    for(i=0;i<n;i++){
         scanf("%d", &vetor[i]);
         if(vetor[i] > maior){
            maior = vetor[i];
         }
    }
    fermath(n,vetor,maior);
}

/*

11 Fermat e os Números Primos (+++)

Pierre de Fermat (1607 – 1665) foi advogado e, como hobby, matemático. Numa carta datada de 25
de dezembro de 1640, ele escreveu para seu amigo Martin Mersenne (1588 – 1648) que havia feito uma
descoberta “maravilhosa”: de que alguns números primos podiam ser escritos como a soma do quadrado
de dois números naturais. Por exemplo:
• 2 = 1+1 = 1² + 1²;
• 5 = 1+4 = 1² + 2²;
• 13 = 4+9 = 2² + 3²;
• 17 = 1+16 = 1² + 4².
Por outro lado, outros números primos, como 3, 7, 11, 19 e 23 não podem ser decompostos desta maneira.
Assim, os números primos que podem ser decompostos como a soma do quadrado de dois números são
chamados de “Números Primos de Fermat”.

Tarefa
Sua tarefa é escrever um programa que seja capaz de imprimir os “Números Primos de Fermat” que são
menores ou iguais a um certo número n, n ∈ N∗, fornecido.

Entrada
A primeira linha da entrada contém o número de casos de teste t, sendo que (1 ≤ t ≤ 50).
Na sequência, cada uma das t linhas seguintes representa o número n a ser utilizado para aquele caso de
teste. Sabe-se também que 1 ≤ n ≤ 106.

Saída
Cada um dost casos de teste deverá ter sua saída impressa numa única linha, como os “Números Primos
de Fermat” separados entre si por um único espaço em branco.
Nos casos de teste de ordem ímpar (1o, 3o, 5o, 7o, ...), os números devem ser impressos em ordem crescente,
enquanto que nos casos de teste de ordem par (2o, 4o, 6o, 8o
, ...) eles devem ser impressos em ordem
decrescente – veja os exemplos.

Exemplos
Entrada Saída
1
50
2 5 13 17 29 37 41
Entrada Saída
3
50
80
100
2 5 13 17 29 37 41
73 61 53 41 37 29 17 13 5 2
2 5 13 17 29 37 41 53 61 73 89 97

*/
