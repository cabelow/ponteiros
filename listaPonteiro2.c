
#include <stdio.h>

int main(){
    int y, *p, x;

    y=0; //var Y = 0

    p=&y; // p é um ponteiro e o simbolo & siginifica caminho da memoria
          // entao p = endereço de y // ex: p=0x5b43d

    x=*p; // x recebe o conteudo referenciado em p, endereço de y, e neste caso ainda é 0, pois y = 0
          // o simbolo * significa acessar o conteudo da memoria p

    x = 4; // x = 4


    (*p)++; // o conteudo referenciado em p recebe ++
            // ou seja p = endereço de y, y++

    x--; // x = 3

    (*p)+=x; // aqui o conteudo de p sera somado ao valo de x
             // ou seja y + x ; y = 1 ; x = 0

    printf("Y= %d", y); // y = 1

    return(0);//fim da func Main()
}
