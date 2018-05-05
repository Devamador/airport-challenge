#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
	int cod;
	char capitao[20];
	struct lista *prox;
	
}Lista;

typedef struct fila{
	char destino[20];
	Lista dados;
	struct fila *prox;
}Fila;

Lista *criar(int cod_aviao,char capitao[]);
void inserir(Lista **inicio,int cod_aviao,char capitao[]);
void remover(Fila **comeco,Fila **fim,Lista **inicio);
void getPatio(Lista *inicio);

#endif
