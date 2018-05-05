
#include "lista.h"

Lista *criar(int cod_aviao,char capitao[]){
	Lista *aviao = (Lista *)malloc(sizeof(Lista));
	if(!aviao){
		printf("Impossivel alocar!!");
		exit(1);
	}
	aviao->cod = cod_aviao;
	strcpy(aviao->capitao,capitao);
	aviao->prox = NULL;
	
	return aviao;
}

void inserir(Lista **inicio,int cod_aviao,char capitao[]){
	Lista *aviao;
	aviao = criar(cod_aviao,capitao);
	if(*inicio == NULL)
		*inicio = aviao;
	else{
		Lista *tmp = *inicio;
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		
		tmp->prox = aviao;	
	}	
	
}

void remover(Fila **comeco,Fila **fim,Lista **inicio){
	Lista *exc = *inicio;
	int cod;
	if(*inicio == NULL)
		printf("\nNenhum aviao no patio!!");
	else{
		printf("Informe o codigo do aviao: ");
		scanf("%d",&cod);
		if(cod == exc->cod){
			(*inicio) = (*inicio)->prox;
			exc->prox = NULL;
			inserirFila(&(*comeco),&(*fim),exc);
			free(exc);
			printf("\nAviao na fila pra decolar");	
		}else{
			Lista *ant;
			ant = exc;
			exc = exc->prox;
			int achou = 0;
			while(exc != NULL){
				if(cod == exc->cod){
					ant->prox = exc->prox;
					exc->prox = NULL;
					inserirFila(&(*comeco),&(*fim),exc);
					free(exc);
					achou = 1;
					printf("\nAviao na fila pra decolar");
					break;
				}
				ant = exc;
				exc = exc->prox;
			}
			if(!achou)
				printf("\nAviao nao encontrado!!");
		
		}
		
	}
	printf("\n");	
}

void getPatio(Lista *inicio){
	if(inicio == NULL)
		printf("\nPatio vazio");
	else{
		Lista *tmp = inicio;
		while(tmp != NULL){
			printf("\nCodigo do aviao: %d",tmp->cod);
			printf("\nCapitao: %s",tmp->capitao);
			printf("\n\n");
			tmp = tmp->prox;
		}
	}	
}
