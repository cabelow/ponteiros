#include<stdio.h>
#include<string.h>

void pri(char *cptr, int n){
    if(n > 0){
        printf("%c", *cptr);
        cptr--;
        //n--;
        pri(cptr, n-1);
    }
}

void main(){
    char s[10] = "abcde";
    char *cptr;

    int n = strlen(s);

    printf("%c", *cptr);
    printf("%d", n);

    //pri(cptr+n, n);
}
