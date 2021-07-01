#include<stdio.h>
#include<stdlib.h>
#include<String.h>

typedef struct Produto Prod;
struct Produto{
    int id;
    char nome[20];
    float preco;
};

Prod entradaProd(){
    Prod p;
    int id;
    char nome[20];
    float preco;

    printf("\n dig id");
    scanf("%d", &id);

    printf("\n dig nome");
    scanf("%s", &nome);

    printf("\n dig preco");
    scanf("%f", &preco);

    p.id = id;
    strcpy(p.nome, nome);//p->nome = nome;
    p.preco = preco;

    //printf("\n prod cadastrado id:%d - nome:%s - preco:%f", p.id, p.nome, p.preco);

    return p;
}

int cadastro(int n, Prod *lp){
    if(n>0){
        *lp = entradaProd();
        //printf("\n prod cadastrado id:%d - nome:%s - preco:%f", lp->id, lp->nome, lp->preco);
        cadastro(n-1,lp+1);

    }
}

void imprimir(int n, Prod *lp){
    if(n>0) {
        printf("\n prod cadastrado id:%d - nome:%s - preco:%f", lp->id, lp->nome, lp->preco);
        //printf("\n prod cadastrado id:%d - nome:%s - preco:%f", p.id, p.nome, p.preco);
        imprimir(n-1, lp+1);
    }
}


void consulta(int n, Prod *lp, int cod){
    if(n>0){
        //printf("\n num prod %d e cod %d", lp->id, cod);
        if(lp->id == cod) {printf("\n prod cadastrado id:%d - nome:%s - preco:%f", lp->id, lp->nome, lp->preco);}
        else {consulta(n-1, lp+1, cod);}
    }
}

/*
void consulta(Prod *lp){
    printf("\n prod cadastrado id:%d - nome:%s - preco:%f", lp->id, lp->nome, lp->preco);
}
*/

void main(){
    int n;
    int cod;
    printf("\n dig n: ");
    scanf("%d", &n);

    printf("\n criando estrutura de produto com %d posicao", n);
    Prod *lp = (Prod *) malloc(n*sizeof(Prod));// cast prod -  n * tamanho de prod

    if(!lp) printf("\n erro ao criar");
    else { printf("\n criado");

        int loop = 1;
        while(loop = 1){
            printf("\n \n 1- preencher   \n 2- imprimir   \n 3-consulta   \n 4- sair \n");
            int op;
            scanf("%d", &op);
            switch (op){
            case 1: //preencher
                printf("\n cadastro()");
                cadastro(n,lp);
                break;
            case 2: //imprimir
                printf("\n imprimir()");
                imprimir(n,lp);
                break;
            case 3:
                printf("\n dig codigo");
                scanf("%d", &cod);
                consulta(n,lp,cod);
                //consulta(lp+cod-1);
                break;
            case 4:
                printf("liberando memoria");
                free(lp);
                loop = 0;
                exit(0);
                break;
            }//fim menu opcao
        }//fim loop
    }//fim else
}//fim main
