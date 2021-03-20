#include<stdio.h>

main (){
    int idade;
    printf("Informe a idade\n");
    scanf("%d", &idade);

    if (idade >=18){

        printf("\nApto para habilitacao\n");

    } else {

        printf("\nInapto para habilitacao\n");
    }


//------------------------------------------------------------------------------------------


    float n1;
    float n2;
    printf("\nInforme a primeira nota\n");
    scanf("%f", &n1);
    printf("\nInforme a segunda nota\n");
    scanf("%f", &n2);

    float media = (n1 + n2)/2;

    if(media >= 6){
        printf("\nO aluno foi aprovado com media %.2f \n", media);
    }else{
        printf("\nO aluno foi reprovado com media %.2f \n", media);
    }

//-------------------------------------------------------------------------

    float numero1;
    float numero2;
    char operador;

    printf("\nInforme qual operação você deseja realizar (+, -, * ou /)\n");
    scanf(" %c", &operador);

    printf("\nInforme o primeiro numero\n");
    scanf("%f", &numero1);

    printf("\nInforme o segundo numero\n");
    scanf("%f", &numero2);

    if(operador == '+'){
        printf("\nA soma dos dois numeros eh %.2f \n", numero1 + numero2);
    } else if(operador == '-'){
            printf("\nA subtração dos dois numeros eh %.2f \n", numero1 - numero2);
        } else if(operador == '*'){
                printf("\nA multiplicação dos dois numeros eh %.2f \n", numero1 * numero2);
            } else if(operador == '/'){
                printf("\nA divisão dos dois numeros eh %.2f \n", numero1 / numero2);
            }
    else{
        printf("\nCaractere invalido.\n");
    }

}
