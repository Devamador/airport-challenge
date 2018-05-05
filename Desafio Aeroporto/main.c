
#include "lista.h"
#include "fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Lista *inicio = (Lista *)malloc(sizeof(Lista));
	if(!inicio){
		printf("Impossivel alocar. Motivo: memoria cheia!!");
		exit(1);
	}
	Fila *comeco,*fim;
	Fila *tmp;
	comeco = fim = NULL;
	inicio = NULL;
	int op,cod,qtd;
	char capitao[20];
	do{
		printf("\n[1] Inserir aviao no patio");
		printf("\n[2] Colocar aviao pra fila de decolagem(remover do patio)");
		printf("\n[3] Mostra avioes que estao no patio");
		printf("\n[4] Listar todos os avioes a espera de decolar");
		printf("\n[5] Listar as caracteristicas do proximo aviao a decolar");
		printf("\n[6] Decolagem de um aviao");
		printf("\n[7] Numero de avioes a espera de decolar");
		printf("\n[0] Sair");
		printf("\n\tOPCAO: ");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Codigo do aviao: ");
				scanf("%d",&cod);
				printf("Capitao do aviao: ");
				fflush(stdin);
				gets(capitao);
				inserir(&inicio,cod,capitao);
				break;
				
			case 2:
				remover(&comeco,&fim,&inicio);
				break;
			
			case 3:
				getPatio(inicio);
				break;	
				
			case 4:
				getFila(&comeco,&fim);
				break;	
			
			case 5:
				infoAviaoProx(comeco);	
				break;
				
			case 6:
				tmp = decolar(&comeco);
				if(tmp != NULL)
					printf("\nAviao %d com destino a %s decolou!\n",tmp->dados.cod,tmp->destino);
				break;
			
			case 7:
				qtd = qtdAvioesDecolar(&comeco,&fim);
				printf("\n%d avioes na espera para decolar\n",qtd);
				break;
					
			case 0:
				break;		
		}
	}while(op);
	
	return 0;
}
