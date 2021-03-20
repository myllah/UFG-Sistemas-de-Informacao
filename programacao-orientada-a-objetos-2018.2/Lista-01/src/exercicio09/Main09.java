//Mylena Mariana Pires Barbosa
package exercicio09;
import java.util.Scanner;
import static java.lang.Math.toIntExact;

public class Main09 {

    public static void main(String args[]) {  
    	Scanner in = new Scanner(System.in);
        
    	System.out.println("Digite o CPF");
    	long cpf = in.nextLong();   
         
        int[] vetor = new int[11];

         long num=10000000000L;
         long resto;    
         int j, i, n;
         int dig1=0;
         int dig2=0; 
         
        for (i = 0; i < 11; i++){        
            resto = (cpf % num);
            j = toIntExact(cpf / num);
             num = num/10;
            cpf = resto;         
            vetor[i] = j;     
        }   
        
        n = 10;
        for (i = 0; i < 9; i++){            
          dig1 = dig1 + (vetor[i]*n);
          n = n - 1;            
        }
       
        n = 11;        
        for (i = 0; i < 10; i++){            
            dig2 = dig2 + (vetor[i]*n);           
            n = n - 1;
        } 
       
        dig1 = dig1*10 %11; 
        dig2 = dig2*10 %11;
        
        if (dig1 == 10) dig1=0;
        if (dig2 == 10) dig2=0;
        
        if (dig1 == vetor[9] && (dig2 == vetor[10])) {
        	System.out.println("CPF Válido");
        }
        else {
        	System.out.println("CPF inválido");           
        }
               
    }  
}


////Exercícios Laboratório Programação
////Usando as classes que permitem a entrada de dados
////pelo usuário (Scanner ou JoptionPane), as classes
////String e Math, e vetores, implemente os exercícios:
//
////9 - Criar um programa que leia um cpf e valide. Pesquise
////a fórmula para validação de CPF na internet.
////	Cálculo do primeiro dígito:
////	Separar os 9 dígitos e multiplicar cada um pelos
////	números de 2 a 10 da direita para a esquerda 
////	(ex: 111444777 → 1*10+1*9+1*8+4*7+4*6+4*5+7*4+7*3+7*2).
////	A soma é dividida por 11. Se o  resto da divisão 
////	for < 2, o dígito é 0, senão, o dígito será 11 – o 
////	resto da divisão.
////Ex: 111444777 → soma = 162/11 = 14 resto 8, logo o dígito
////será 11-8 = 3 → 111444777.3X
////	Cálculo do segundo dígito:
////	Acrescenta o primeiro dígito calculado e executa a mesma 
////	regra multiplicando de 2 a 11 da direita para a esquerda 
////	(ex: 1114447773 → 1*11+1*10+1*9+4*8+4*7+4*6+7*5+7*4+7*3+3*2). 
////	A soma é dividida por 11. Se o  resto da divisão for < 2, o 
////	dígito é 0, senão, o dígito será 11 – o resto da divisão.
////Ex: 111444777.3 → soma = 204/11 = 18 resto 6, logo o dígito 
////será 11-6 = 5 → 111444777.35
