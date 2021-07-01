#include<stdio.h>
#include<stdlib.h>

void ler(int *pvet, int n){
    if(n>0){
        printf("\n entrada: ");
        scanf("%d", pvet);

        printf("\n endereco de pvet: %p", pvet);
        printf("\n valor de pvet: %d", *pvet);
        ler(pvet+1, n-1);

    }
}

void main(){
    int i, n;
    printf("\n valor n: ");
    scanf("%d", &n);

    printf("\n criando vetor de %d posicao", n);
    int *pvet = (int *) malloc(n*sizeof(int)); //int vet[n];
    int *ini;
    ini = pvet;
    //pvet = &vet;//recebe end ini

    if(!pvet) printf("\n erro");//testa se criou
    else {
        printf("\n criado");
        ler(pvet, n);//chama fun pra ler

        //mostra
        pvet = ini;//recebe ini de novo
        printf("\n endereco do ini de pvet: %p", pvet);
        printf("\n printando vetor no for \n");
        for(i=0; i<n; i++){
            printf("\n ender de pvet: %p", pvet);
            printf("\n valor de pvet: %d", *pvet);
            //printf("%d", *pvet);
            pvet++;
        }//fim for

        //libera
        printf("\n liberando memoria");
        free(pvet);
    }//fim de malloc

}//fim main
