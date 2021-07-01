#include <stdio.h>

int main(){
    int x, *p, **q;

    p=&x;
    q=&p;
    x=10;

    printf("%d", **q);// esta linha recebeu alteração de &q para **q, dupla referenciação

    return(0);
}
