
#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

void inserirFila(Fila **comeco,Fila **fim,Lista *exc){
	Fila *p = (Fila *)malloc(sizeof(Fila));
	if(!p){
		printf("Impossivel alocar!!");
		exit(1);
	}
	printf("Informe o destino: ");
	fflush(stdin);
	gets(p->destino);
	p->dados = *exc;
	p->prox = NULL;
	if(*fim == NULL)
		*comeco = *fim = p;
	else{
		(*fim)->prox = p;
		(*fim) = (*fim)->prox;
	}
		
}
void inserirNo(Fila **comeco,Fila **fim,Fila *tmp){
	if(*comeco == NULL)
		*comeco = *fim = tmp;
	else{
		(*fim)->prox = tmp;
		(*fim) = (*fim)->prox;
	}	
	
}
Fila *decolar(Fila **comeco){
	Fila *decolou = NULL;
	
	if(*comeco != NULL){
		decolou = *comeco;
		(*comeco) = (*comeco)->prox;
		decolou->prox = NULL;	
	}else{
		printf("\n Nenhum aviao na fila pra decolar!!\n");
	}
	
	return decolou;
}

void getFila(Fila **comeco,Fila **fim){
	if(*comeco == NULL)
		printf("\nFila vazia!!\n");
	else{
		Fila *p = NULL,*tmp;
		while(p != *comeco){
			
			tmp = decolar(&(*comeco));
			if(p == NULL)
				p = tmp;
			
			printf("\nCodigo do aviao: %d",tmp->dados.cod);
			printf("\nCapitao: %s",tmp->dados.capitao);
			printf("\nDestino: %s",tmp->destino);
			printf("\n\n");
			inserirNo(&(*comeco),&(*fim),tmp);	
		} 
		
	}
}

void infoAviaoProx(Fila *comeco){
	if(comeco == NULL)
		printf("\nNenhum aviao na fila!!");
	else{
		
		Fila *tmp = comeco;
	
		printf("\nCodigo do aviao: %d",tmp->dados.cod);
		printf("\nCapitao: %s",tmp->dados.capitao);
		printf("\nDestino: %s",tmp->destino);
	}
	printf("\n");	
	
}

int qtdAvioesDecolar(Fila **comeco, Fila **fim){
	if(*comeco == NULL)
		return 0;
	else{
		Fila *p = NULL,*tmp;
		int qtd = 0;
		while(p != *comeco){
			tmp = decolar(&(*comeco));
			if(p == NULL)
				p = tmp;
			
			qtd++;
			inserirNo(&(*comeco),&(*fim),tmp);	
		}
		return qtd;
	}	
}
