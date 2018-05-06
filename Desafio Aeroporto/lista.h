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

Lista *criar(int cod_aviao,char capitao[]);//criar um node  //Criado pro Rodrigo Nunes
void inserir(Lista **inicio,int cod_aviao,char capitao[]);//inseri o node criado na lista  //Criado pro Rodrigo Nunes
void remover(Fila **comeco,Fila **fim,Lista **inicio);//remove um determinado node da Lista e coloca na Fila  //Criado pro Rodrigo Nunes
void getPatio(Lista *inicio);//mostra as informações de cada node da Lista  //Criado pro Rodrigo Nunes

#endif
