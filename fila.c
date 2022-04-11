#include <stdio.h>
#define MAX 5
typedef struct tdado{
	char nome[40];
	int idade;
} tdado;
typedef struct{
	tdado fila[MAX];
	int ini,fim;
} tfila;
//------------------------
void inicializa(tfila *f){
	f->ini = 0;
	f->fim = -1;	
}
//------------------------
int enqueue(tfila *f, tdado x){//Enfileirar
	if(f->fim == MAX-1) //Já usei todas as fichas da fila
	return 0;
	//Inserindo porque tem espaço
	f->fim++;
	f->fila[f->fim] = x;
	retunr 1;
}
//------------------------
tdado dequeue(tfila *f){
	tdado aux = f->fila[f->ini];
    f->ini++;
    return aux;
}
//------------------------
int isEmpty(tfila f){
	if(f.fim < f.ini)//Fila está vazia
	  return 1;
	else
	  return 0;
}
//------------------------
void mostra(tfila f){
	while(f.ini <= f.fim){
		printf("%s:%d |", f.fila[f.ini].nome),
		                  f.fila[f.ini].idade);
	}//Fim while
}
//------------------------











