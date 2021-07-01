#include <stdio.h>

void trocar(int *pa, int *pb, int tamanho){
    if(tamanho > 0){
        *pb = *pa;
        pa--;
        pb++;
    }
}

void main(){
    int i, a, b, tamanho;

    scanf("%d", &a);
    scanf("%d", &b);

    int vet[a];
    int bet[b];

    tamanho = sizeof(vet) / sizeof(int);

    int *pa = &vet;
    int *pb = &bet;

    for(i=0; i<tamanho; i++) vet[i] = i;

    trocar(pa+tamanho-1,pb,tamanho);

    for(i=0; i<tamanho; i++) printf("%d", vet[i]);
}
