#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "TabelaHash.h"

#define max  10007

int main() {
    struct timeval t0;
    struct timeval t1;
    struct aluno *aluno;
    aluno = (struct aluno*) malloc(sizeof(struct aluno));
    int colisao = 0;
    float elapsed = 0;
    srand(12);
    int mat = 0;

    Hash *hash = criaHash(max);

//========================================================================================================
    printf("\n======================================\n");
    printf("Hash sem colisao");
////Insere Hash Sem Colisao
    for (int i = 0; i < max; i++) {
        mat = rand();

        if(checarColisao(hash, mat) == 0){
            colisao++;
        }

        if(mat % 2 == 0) {
            aluno->matricula = mat;
            aluno->nome = "1";
            aluno->n1 = 1;
            aluno->n2 = 100;
            aluno->n3 = 50;
        }
        if(mat%2 != 0){
            aluno->matricula = mat;
            aluno->nome = "2";
            aluno->n1 = 100;
            aluno->n2 = 43;
            aluno->n3 = 91;
        }

        gettimeofday(&t0, 0);

        insereHash_SemColisao(hash, *aluno);

        gettimeofday(&t1, 0);
        elapsed += timedifference_msec(t0, t1);


    }


    printf("\n tempo: %f",elapsed);

////========================================================================================================

//Busca Hash Sem Colisao

    printf("\nProcure uma matricula: ");
    scanf("%d", &mat);

    gettimeofday(&t0, 0);

    buscaHash_SemColisao(hash, mat, aluno);

    gettimeofday(&t1, 0);
    elapsed = timedifference_msec(t0, t1);
    printf("\n Tempo de BuscaHash Sem Colisao %f milliseconds.", elapsed);


////========================================================================================================
//
//    //Insere Hash EnderAberto
//    printf("\n======================================\n");
//    printf("Hash EnderAberto");
//    for (int i = 0; i < max; i++) {
//        mat = rand();
//
//        if(checarColisao(hash, mat) == 0){
//            colisao++;
//        }
//
//        if(mat % 2 == 0) {
//            aluno->matricula = mat;
//            aluno->nome = "1";
//            aluno->n1 = 1;
//            aluno->n2 = 100;
//            aluno->n3 = 50;
//        }
//        if(mat%2 != 0){
//            aluno->matricula = mat;
//            aluno->nome = "2";
//            aluno->n1 = 100;
//            aluno->n2 = 43;
//            aluno->n3 = 91;
//        }
//
//        gettimeofday(&t0, 0);
//
//        insereHash_EnderAberto(hash, *aluno);
//
//        gettimeofday(&t1, 0);
//        elapsed += timedifference_msec(t0, t1);
//
//
//    }
//
//
//    printf("\n quantidade de colisao: %d"
//           "\n tempo: %f",colisao,elapsed);
////========================================================================================================
//    //Busca Hash EnderAberto
//
//    printf("\nProcure uma matricula: ");
//    scanf("%d", &mat);
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
//Insere Hash Encadeamento Separado

    printf("\n======================================\n");
    printf("Hash Ecadeamento Separado ");

    for (int i = 0; i < max; i++) {
        mat = rand();

        if(checarColisao(hash, mat) == 0){
            colisao++;
        }

        if(mat % 2 == 0) {
            aluno->matricula = mat;
            aluno->nome = "1";
            aluno->n1 = 1;
            aluno->n2 = 100;
            aluno->n3 = 50;
        }
        if(mat%2 != 0){
            aluno->matricula = mat;
            aluno->nome = "2";
            aluno->n1 = 100;
            aluno->n2 = 43;
            aluno->n3 = 91;
        }

        gettimeofday(&t0, 0);

        insereHash_Encadeamento_Separado(hash, *aluno);

        gettimeofday(&t1, 0);
        elapsed += timedifference_msec(t0, t1);


    }


    printf("\n quantidade de colisao: %d"
           "\n tempo: %f",colisao,elapsed);
//
//    //Busca Hash Encadeamento Separado
//
//    printf("\nProcure uma matricula: ");
//    scanf("%d", &mat);
//
//    gettimeofday(&t0, 0);
//
//    buscaHash_Encadeamento_Separado(hash, mat, aluno);
//
//    gettimeofday(&t1, 0);
//    elapsed = timedifference_msec(t0, t1);
//    printf("\n Tempo de BuscaHash Encadeamento Separado %f milliseconds.", elapsed);

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