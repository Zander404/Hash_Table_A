#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "TabelaHash.h"

#define max  10011
int main() {
    struct timeval t0;
    struct timeval t1;
    struct aluno *aluno;
    aluno = (struct aluno*) malloc(sizeof(struct aluno));
    int colisao = 0;
    float elapsed = 0;
    int matricula = 0;
    srand(12);


    Hash *hash = criaHash(max);
    for (int i = 0; i < 10; i++) {
        aluno->matricula = rand() % 10000;
        aluno->n1 = rand() % 100;
        aluno->n2 = rand() % 100;
        aluno->n3 = rand() % 100;
    }

//========================================================================================================
    //Insere Hash Sem Colisao

    gettimeofday(&t0, 0);

    insereHash_SemColisao(hash, *aluno);

    gettimeofday(&t1, 0);
    elapsed = timedifference_msec(t0, t1);
    printf("\n Tempo de InserirHash Sem Colisao %f .", elapsed);

//========================================================================================================

//Busca Hash Sem Colisao

    gettimeofday(&t0, 0);
    buscaHash_SemColisao(hash, 77, aluno);

    gettimeofday(&t1, 0);
    elapsed = timedifference_msec(t0, t1);
    printf("\n Tempo de BuscaHash Sem Colisao %f milliseconds.", elapsed);

////========================================================================================================
//
//    //Insere Hash EnderAberto
//
//    gettimeofday(&t0, 0);
//
//    insereHash_EnderAberto(hash, *aluno);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Tempo de InserirHash EnderAberto %f milliseconds.", elapsed);
//
////========================================================================================================
//    //Busca Hash EnderAberto
//
//    gettimeofday(&t0, 0);
//
//    buscaHash_EnderAberto(hash, rand(), aluno);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Tempo de BuscaHash EnderAberto %f milliseconds.", elapsed);
//
////========================================================================================================
////Insere Hash Encadeamento Separado
//
//    gettimeofday(&t0, 0);
//
//    insereHash_Encadeamento_Separado(hash,*aluno);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Tempo de InserirHash Encadeamento Separado %f milliseconds.", elapsed);
//
//
//    //Busca Hash Encadeamento Separado
//
//    gettimeofday(&t0, 0);
//
//    buscaHash_Encadeamento_Separado(hash, rand(), aluno);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Tempo de BuscaHash Encadeamento Separado %f milliseconds.", elapsed);
//
//    //Hash pela Divisao
//
//    gettimeofday(&t0, 0);
//
//    chaveDivisao(rand(),hash->TABLE_SIZE);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Chave Divisao %f milliseconds.", elapsed);
//
//
//    //Hash com Sondagem Quadratica
//
//    gettimeofday(&t0, 0);
//
//    sondagemQuadratica(rand(),rand(),hash->TABLE_SIZE);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Sondagem quadratica %f milliseconds.", elapsed);

    return 0;
}