#include <iostream>

#include "GrafoMatriz.h"
#include "GrafoListaAdj.h"


int main(int argc, char** argv) {
	GrafoMatriz *grafo;
	grafo = new GrafoMatriz(4);
	
	GrafoListaAdj *grafo1;
	grafo1 = new GrafoListaAdj(4);
	
	
	cout<<"Grafo Matriz \n\n";
	
	grafo->adAresta(1,2);
	grafo->adAresta(2,1);
	grafo->adAresta(3,2);
	grafo->adAresta(3,3);
	getchar();
	
	grafo->imprimeGrafo();
	getchar();
	grafo->imprimeMatrizGrafo();
	getchar();
	
	grafo->removeAresta(2,1);
	grafo->removeAresta(3,1);
	grafo->removeAresta(3,3);
	grafo->adAresta(2,3);	
	getchar();
	
	grafo->imprimeGrafo();
	getchar();
	grafo->imprimeMatrizGrafo();
	getchar();
	
	cout<<"Grafo Lista \n\n";
	
	grafo1->adAresta(0,2);
	grafo1->adAresta(0,3);
	grafo1->adAresta(1,2);
	grafo1->adAresta(3,2);
	grafo1->adAresta(2,2);
	grafo1->adAresta(1,3);
	grafo1->adAresta(3,0);
	getchar();
	
	grafo1->imprimeGrafo();
	getchar;
	
	grafo1->removeAresta(1,2);
	grafo1->removeAresta(3,0);
	grafo1->removeAresta(2,2);
	grafo1->removeAresta(1,2);
	getchar();
	
	grafo1->imprimeGrafo();
	getchar;
	
}
