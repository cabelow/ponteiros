#include<stdio.h>
#include<stdlib.h>

int **alocarMatriz(int linhas, int colunas){
    int i, **matriz; //definir uma ponteiro duplo para guardar os ponteiros de vetores

    //printf("\n criar matriz");
    matriz = (int **) malloc(linhas* sizeof(int *));
    // este cast é duplo pq recebe ponteiro de ponteiro
    //o cast do sizof é um ponteiro
    for(i=0; i<linhas; i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int)); //aloco um ponteiro de inteiros para cada posicao;
    }//fim for

    return matriz;// retorna a dupla referenciação
}//fim alocarMatriz

int ** preencherMatriz(int **matriz, int linhas, int colunas){
    int i, j;

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("dig um valor para %d x %d:", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int **mostrarMatriz(int **matriz, int linhas, int colunas){
    int i, j;

    for(i=0; i<linhas; i++){
    printf("\n");
        for(j=0; j<colunas; j++){
            printf("%d", matriz[i][j]);

        }
    }
}

int **liberarMatriz(int **matriz, int linhas, int colunas){
    int i;
    if(matriz == NULL){return 0;}
    for(i=0; i<linhas; i++){
        free(matriz[i]);
    }

    free(matriz);
}

void main(){
    int linhas, colunas; //receber os dados de entrada

    printf("\n dig linha: ");
    scanf("%d", &linhas);
    printf("\n dig colunas: ");
    scanf("%d", &colunas);

    int **matriz; //criar ponteiro duplo

    matriz = alocarMatriz(linhas, colunas);

    preencherMatriz(matriz, linhas, colunas);
    mostrarMatriz(matriz, linhas, colunas);
    liberarMatriz(matriz, linhas, colunas);



    //matriz = (int **) malloc(n*sizeof(int *))

    /*
    for(i=0; i<n; i++){
        mattriz[i] = (int *) malloc(m*sizeof(int));
    }
    */
}
