#include <stdio.h>

int main(){
	
	int i, j, aux;
	
	int n; scanf("%d", &n);
	
	int v[n];
	
	for(i=0; i < n; i++){
		scanf("%d", &v[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
	int cont = 0;
	for(i=0; i<n; i++){
		if(v[i] != v[i+1] && v[i] != v[i-1]){
			cont++;
		}
	}
	
//	for(i=0; i < n; i++){
//		printf("%d ", v[i]);
//	}

printf("%d\n", cont);
	
	return 0;
}

/*Contagem de Elementos Únicos (+++)
Elabore um programa que conte o número total de elementos únicos em um vetor de números inteiros.

Entrada
A entrada contém duas linhas. A primeira, contém um valor inteiro n < 5000 que corresponde ao
número de elementos que aparecem na segunda linha. A segunda linha contém n valores inteiros, separados
entre si por um espaço.

Saída
A saída é formada por uma linha contendo um valor inteiro que corresponde ao número de elementos
que aparecem apenas uma vez no vetor. Após o valor, o programa deve imprimir o caractere de quebra de
linha.

Exemplo
Entrada
7
3 6 2 9 2 7 9
Saída
3
*/
