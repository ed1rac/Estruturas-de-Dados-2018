/* TAD: Ponto (x,y) */
/* Tipo exportado */
typedef struct ponto Ponto;

/* Fun��es exportadas */
/* Fun��o cria - Aloca e retorna um ponto com coordenadas (x,y) */
Ponto *pto_cria (float x, float y);

/* Fun��o libera - Libera a mem�ria de um ponto previamente criado */
void pto_libera (Ponto * p);

/* Fun��o acessa - Retorna os valores das coordenadas de um ponto */
void pto_acessa (Ponto *p, float *x, float *y);

/* Fun��o atribui - Atribui novos valores �s coordenadas de um ponto */
void pto_atribui (Ponto *p, float x, float y);

/* Fun��o distancia - Retorna a dist�ncia entre dois pontos */
float pto_distancia (Ponto *p1, Ponto *p2);
