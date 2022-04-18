#include <stdio.h>
#define MAX 5
typedef struct tdado{
	char nome[40];
	int idade;
} tdado;
typedef struct{
	tdado fila[MAX];
	int ini,fim,qtd;
} tfila;
//------------------------
void inicializa(tfila *f){
	f->ini = 0;
	f->fim = -1;
	f->qtd = 0;	
	
}
//------------------------
int enqueue(tfila *f, tdado x){//Enfileirar
	if(f->qtd == MAX) //Já usei todas as fichas da fila
	return 0;
	//Inserindo porque tem espaço
	if(	f->fim == MAX-1)//se estou na última posição
		f->fim = 0;	//pulo para zero 0
    else 
	f->fim++;
	f->fila[f->fim] = x;
	f->qtd++;
	return 1;
}
//------------------------
tdado dequeue(tfila *f){
	tdado aux = f->fila[f->ini];
	if(f->ini == MAX-1)
	   f->ini = 0;	
    else
    f->ini++;
	f->qtd--;        
    return aux;
}
//------------------------
int isEmpty(tfila f){
	if(f.qtd == 0)//Fila está vazia
	  return 1;
	else
	  return 0;
}
//------------------------
void mostra(tfila f){
	int i;
	for(i=1;i<=f.qtd;i++){
				printf("%s:%d |", f.fila[f.ini].nome,
		                  f.fila[f.ini].idade);
		 if(f.ini == MAX -1)
		    f.ini = 0;
		 else                 
		    f.ini++;                 
	}//Fim while
	printf("\n");
}
//------------------------
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Fila Estatica ****\n");
	printf("1-Enqueue (Inserir)\n");
	printf("2-Dequeue (Remover)\n");
	printf("3-Inicio e Fim\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------------
int main(){
	tfila f1;
	tdado x;
	int op;
	inicializa(&f1);
	do{
		printf("Inicio[%d] | Fim[%d]\n",f1.ini,f1.fim);
		
		mostra(f1);
		op = menu();
		switch(op){
			case 1: printf("Entre com o nome e idade:");
					fflush(stdin);
					gets(x.nome);
					scanf("%d",&x.idade);
					if(   enqueue(&f1,x) ==1 )  
					  printf("Dado inserido :)\n");
					else
					  printf("Vagas esgotadas :(\n"); 
			break;
			case 2: if(!isEmpty(f1)) {
				       x = dequeue(&f1); 
			 		   printf("Dado removido:%s:%d\n",x.nome,x.idade);
				     }// fim if vazio
				     else
				       printf("Queue empty :(\n");
				break;
			case 3:
			 break;	
			case 0: printf("Saindo ....\n");	    
		}// fim switch
	    getch(); // system("pause");
	    system("cls");
	}while(op!=0);

	return 0;
}











