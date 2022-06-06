#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "TabelaHash.h"

#define max  10007
int main() {
    struct timeval t0;
    struct timeval t1;
    struct aluno* alu;
    alu = (struct aluno*) malloc(sizeof(struct aluno));
    int soma;
    float elapsed;
    srand(12);

    Hash *hash = criaHash(max);
    for (int i = 0; i < 1000; i++) {
        alu->matricula = rand() % 10000;
        alu->n1 = rand() % 100;
        alu->n2 = rand() % 100;
        alu->n3 = rand() % 100;
    }

    srand(5);

    gettimeofday(&t0, 0);
    /* ... YOUR CODE HERE ... */

    for ( int i = 0; i < 1000; i++) {
     insereHash_SemColisao(hash, *alu);
    }

    //Busca Hash
     for(int i = 0; i<100; i++){
        if(buscaHash_SemColisao(hash, rand(),alu) == 1){
            printf("\nChave encontrada!!!");
        }
        if(buscaHash_SemColisao(hash,,alu) == 0) {
            printf("\nChave nao encontrada!!!");
        }

        soma += buscaHash_SemColisao(hash, rand(),alu);
    }

    //Insere Hash EnderAberto
    for(int i=0;i<100; i++){
        insereHash_EnderAberto(hash, alu);
    }

    //Busca Hash EnderAberto
    for(int i=0;i<100;i++){
        if()
            buscaHash_EnderAberto(hash,rand(),&alu);
    }

    //Insere Hash Encadeamento Separado
    for(int i=0;i<100;i++){
        insereHash_Encadeamento_Separado(hash,alu );
    }

    //Busca Hash Encadeamento Separado
    for(int i=0;i<100;i++){
        buscaHash_Encadeamento_Separado(hash, rand(), &alu);
    }

    //Hash pela Divisao
    for(int i=0;i<100;i++){
        chaveDivisao(rand(),hash);

    }

    //Hash com Sondagem Quadratica
    for(int i=0;i<100;i++){
        sondagemQuadratica(1,1,hash);

    }

    gettimeofday(&t1, 0);

    elapsed = timedifference_msec(t0, t1);

    printf("\n Code executed in %f milliseconds.", elapsed);

    return 0;
}