//Pot�ncias de dois devem ser evitadas
//deve ser um n�mero primo distante de pequenas pot�ncias de dois


float timedifference_msec(struct timeval t0, struct timeval t1);

//STRUCTS

 typedef struct aluno{
    int matricula;
    char *nome;
    int n1,n2,n3;
    struct aluno *prox;
}alu;

struct hash{
    int qtd, TABLE_SIZE;
    struct aluno **itens;
};

typedef struct hash Hash;

// CRIA E  LIBERA HASH
Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha);
int valorString(char *str);

//SEM COLISAO

int insereHash_SemColisao(Hash* ha, struct aluno al);
int buscaHash_SemColisao(Hash* ha, int mat, struct aluno* al);

// ENDERABERTO
int insereHash_EnderAberto(Hash* ha, struct aluno al);
int buscaHash_EnderAberto(Hash* ha, int mat, struct aluno* al);

//ENNCADEAMENTO SEPARADO

int insereHash_Encadeamento_Separado(Hash* ha, struct aluno al);
int buscaHash_Encadeamento_Separado(Hash* ha, int mat, struct aluno* al);


int chaveDivisao(int chave, int TABLE_SIZE);
int chaveDobra(int chave, int TABLE_SIZE);
int chaveMultiplicacao(int chave, int TABLE_SIZE);
int sondagemLinear(int pos, int i, int TABLE_SIZE);
int sondagemQuadratica(int pos, int i, int TABLE_SIZE);
int duploHashing(int pos, int chave, int i, int TABLE_SIZE);
