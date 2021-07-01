#include <stdio.h>


void main(){
    int num;
    int i;

    scanf("%d", &num);

    int vet[num];


    for(i=0; i<num; i++){
        vet[i]=i;
        printf("%d", vet[i]);
    }
}
