#include <stdio.h>

int main(){
    int x, *p, **q;

    p=&x;
    q=&p;
    x=10;

    printf("%d", **q);// esta linha recebeu altera��o de &q para **q, dupla referencia��o

    return(0);
}
