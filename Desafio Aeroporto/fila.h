#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "lista.h"


void inserirFila(Fila **comeco,Fila **fim,Lista *exc);//inseri na Fila um node do tipo Lista  //Criado pro Rodrigo Nunes
void getFila(Fila **comeco,Fila **fim);//Mostra todos os aviões que estam na fila pra decolar  //Criado pro Rodrigo Nunes
Fila *decolar(Fila **comeco);//remove o primeiro avião que esta na fila  //Criado pro Rodrigo Nunes
void inserirNo(Fila **comeco,Fila **fim,Fila *tmp);//Criado pro Rodrigo Nunes
void infoAviaoProx(Fila *comeco);//mostra a informação do proximo avião que irá decolar  //Criado pro Rodrigo Nunes
int qtdAvioesDecolar(Fila **comeco,Fila **fim);//retorna a quantidade de aviões que estao na fila para decolar  //Criado pro Rodrigo Nunes
	

#endif
