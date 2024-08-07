#include <stdio.h>
#include <stdlib.h>

void multiplicacao_de_matrizes_boolenas(int l1, int l2, int c1, int c2, int a[l1][c1], int b[l2][c2]){
    int i, j, k = 0, l = 0, v = 0;
    int prod[l1][c2];

    for(i = 0; i < l1; i++){
        for(j = 0; j < c2; j++){
            k = 0;
            l = 0;
            v = 0;
            while((k < c1) && (l < l2)){
                if((a[i][k] == 1) && (b[l][j] == 1)){
                    prod[i][j] = 1;
                    v = 1;
                    break;
                }

                k++;
                l++;
            }

            if((k == c1) && (l == l2) && (v == 0)){
                prod[i][j] = 0;
            }
        }
    }

    printf("Matriz resultante: \n");
    for (i = 0; i < l1; i++){
        for (j = 0; j < c2; j++){
            printf ("%d ", prod[i][j]);
        }
        printf("\n");
    }

}

int main (void){
    int i, j, l1, l2, c1, c2, aux;

    do{

        printf("Informe o numero de linhas da matriz A (de 2 a 4):\n");
        do{
            scanf("%d", &l1);
        }while (l1 > 4 || l1 < 2);

        printf("Informe o numero de colunas da matriz A (de 2 a 4):\n");
        do{
            scanf("%d", &c1);
        }while (c1 > 4 || c1 < 2);

        printf("Informe o numero de linhas da matriz B (de 2 a 4):\n");
        do{
            scanf("%d", &l2);
        }while (l2 > 4 || l2 < 2);


        printf("Informe o numero de colunas da matriz B (de 2 a 4):\n");
        do{
            scanf("%d", &c2);
        }while (c2 > 4 || c2 < 2);

        if(c1 != l2){
            printf("\nNao eh possivel multiplicar. Informe novos valores. \n \n");
        }
    }while(c1 != l2);


    int mat1[l1][c1];
    int mat2[l2][c2];

    printf("\nInsira os valores da matriz A:\n");

    for (i = 0; i < l1; i++){
        for (j = 0; j < c1; j++){
            scanf ("%d", &aux);

            if(aux == 1 || aux == 0){
                mat1[i][j] = aux;
            }
            else{
                printf("Matrizes booleanas nao aceitam numeros alem de 0 e 1. Tente inserir algum desses numeros para essa posicao. \n");
                j--;
            }
        }
    }

    printf("\nMatriz A: \n");
    for (i = 0; i < l1; i++){
        for (j = 0; j < c1; j++){
            printf ("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nInsira os valores da matriz B:\n");

    for (i = 0; i < l2; i++){
        for (j = 0; j < c2; j++){
            scanf ("%d", &aux);

            if(aux == 1 || aux == 0){
                mat2[i][j] = aux;
            }
            else{
                printf("Matrizes booleanas nao aceitam numeros alem de 0 e 1. Tente inserir algum desses numeros para essa posicao. \n");
                j--;
            }
        }
    }

    printf("\nMatriz B: \n");
    for (i = 0; i < l2; i++){
        for (j = 0; j < c2; j++){
            printf ("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    multiplicacao_de_matrizes_boolenas(l1, l2, c1, c2, mat1, mat2);

    return 0;
}
