#include <stdio.h>

int main(){
	
	int n; scanf("%d", &n);
	
	int i, j, aux;
	
	int v[n];
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(v[j] < v[i]){
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}

/*	
	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}
*/
	
	float mediana = 0;
	if(n%2 == 0){
		mediana = ((float)v[(n/2)-1] + (float)v[((n/2)-1)+1])/2;
		//printf("%d\n", v[(n/2)-1]);
		//printf("%d\n", v[((n/2)-1)+1]);
	}else{
		mediana = (float)v[(((n-1)/2))];
	}
		printf("%.2f\n", mediana);
	
return 0;
}
/*Mediana (++)

Em teoria da probabilidade e estatística, a mediana, é uma medida de localização do centro da distri-
buição dos dados, definida do seguinte modo: Ordenados os elementos da amostra, a mediana é o valor
(pertencente ou não à amostra) que a divide ao meio, isto é, 50% dos elementos da amostra são menores ou
iguais à mediana e os outros 50% são maiores ou iguais à mediana. Para uma coleção de tamanho ímpar,
a mediana é exatamente o elemento médio, ou seja, aquele que a divide de acordo com a regra citada. Já
para uma coleção de tamanho par, a mediana é determinada como a média aritmética dos dois elementos
centrais.

Entrada
A entrada consiste de um único caso de teste. Na primeira linha, é informado um inteiro N, 0 < N ≤ 10 6 ,
representando a quantidade de elementos da amostra de dados. Nas N linhas seguintes é informado um
inteiro por linha, este valor varia de −2 32 a 2 32 − 1.

Saída
A saída consiste da mediana dos dados informados. O valor da mediana deve ser formatado com duas
casas decimais.
Exemplo
Entrada
6
1
3
4
5
4
2
Saída
3.50
Entrada
7
3
9
1
5
4
7
1
Saída
4.00
*/
