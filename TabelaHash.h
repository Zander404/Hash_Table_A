//Pot�ncias de dois devem ser evitadas
//deve ser um n�mero primo distante de pequenas pot�ncias de dois


float timedifference_msec(struct timeval t0, struct timeval t1);

struct aluno{
    int matricula;
    char nome[200];
    int n1,n2,n3;
};

struct hash{
    int qtd, TABLE_SIZE;
    struct aluno **itens;
};


typedef struct hash Hash;

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;




typedef struct elemento* Lista;
typedef struct hash Hash;



Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha);
int valorString(char *str);

int insereHash_SemColisao(Hash* ha, struct aluno al);
int buscaHash_SemColisao(Hash* ha, int mat, struct aluno* al);
int insereHash_EnderAberto(Hash* ha, struct aluno al);
int buscaHash_EnderAberto(Hash* ha, int mat, struct aluno* al);

int chaveDivisao(int chave, int TABLE_SIZE);
int chaveDobra(int chave, int TABLE_SIZE);
int chaveMultiplicacao(int chave, int TABLE_SIZE);
int sondagemLinear(int pos, int i, int TABLE_SIZE);
int sondagemQuadratica(int pos, int i, int TABLE_SIZE);
int duploHashing(int pos, int chave, int i, int TABLE_SIZE);


Lista* criaLista();
Lista* insereLista(Lista* li, struct aluno al);
int removeLista(Lista *li);
