#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "lista.h"


void inserirFila(Fila **comeco,Fila **fim,Lista *exc);
void getFila(Fila **comeco,Fila **fim);
Fila *decolar(Fila **comeco);
void inserirNo(Fila **comeco,Fila **fim,Fila *tmp);
void infoAviaoProx(Fila *comeco);
int qtdAvioesDecolar(Fila **comeco,Fila **fim);
	

#endif
