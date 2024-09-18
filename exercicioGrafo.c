#include <stdio.h>
#include <stdlib.h>


typedef struct {
	
	int valor;
	struct no * proximo;	
	
}no ;

typedef no * grafo[8];


void iniciarGrafo(grafo  g){
	int i=1;
	for (i = 1; i<8; i++){
		g[i] = (no *)malloc(sizeof(no));
		g[i]->valor = NULL;
		g[i]->proximo = NULL;
	}
	puts("Grafo Iniciado");
}

void preencherGrafo(grafo g, int vertice, int aresta){
	
	no * novo = (no*)malloc(sizeof(no)); // criei novo para ser a variavel que vai caminhar nas comparacoes
	novo->valor = aresta;
	novo->proximo = NULL;
	
	no * atual = (no*)malloc(sizeof(no)); // criei atual para comparar com o novo ^
	atual = g[vertice];

	while(atual->proximo != NULL){
		atual = atual->proximo;
	}
	atual->proximo = novo;
	
}

void mostrarGrafo(grafo g) {
	int i = 1;
    printf(" ---------------------------------------\n");
    for (i = 1; i < 8; i++) {
        no *atual = g[i];
        printf("Vertice %d: ", i);
        while (atual != NULL) {
            printf("| %d | ", atual->valor);
            atual = atual->proximo;
        }
        printf("\n");
    }
    printf(" ---------------------------------------\n");
}

int main(){
	grafo g;
	iniciarGrafo(g);
	
	preencherGrafo(g, 1, 2);	
	preencherGrafo(g, 1, 3);
	preencherGrafo(g, 1, 4);
	preencherGrafo(g, 2, 1);
	preencherGrafo(g, 2, 3);
	preencherGrafo(g, 2, 4);
	preencherGrafo(g, 2, 6);
	preencherGrafo(g, 3, 1);
	preencherGrafo(g, 3, 4);
	preencherGrafo(g, 3, 2);
	preencherGrafo(g, 4, 2);
	preencherGrafo(g, 4, 1);
	preencherGrafo(g, 4, 3);
	preencherGrafo(g, 4, 7);
	preencherGrafo(g, 5, 6);
	preencherGrafo(g, 5, 7);
	preencherGrafo(g, 6, 2);
	preencherGrafo(g, 6, 7);
	preencherGrafo(g, 6, 5);
	preencherGrafo(g, 7, 6);
	preencherGrafo(g, 7, 4);
	preencherGrafo(g, 7, 5);
	
	mostrarGrafo(&g);
	
	
	
	
		
	
	
	
	return 0;
}

