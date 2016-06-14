#include "GrafoListaAdj.h"

GrafoListaAdj::GrafoListaAdj(int Nvertices) {
	if (Nvertices > 0) {
		vizinhos = new lista[ Nvertices ];
 		verticeNum = Nvertices;
	}
}
void GrafoListaAdj::removeAresta(int i, int j){
	if(existeAresta(i,j)){
		vizinhos[i].remove(j);		
	}
}

bool GrafoListaAdj::existeAresta(int i, int j){
	if(i<verticeNum && j<verticeNum){
		return vizinhos[i].busca(j);
	}
	else
		return false;
}

void GrafoListaAdj::imprimeGrafo(){
	for(int i=0; i<verticeNum; i++){
		for(int j=0; j<verticeNum; j++){
			if(existeAresta(i,j))
				cout << "Vertice: " << i << " Vertice: " << j << " Possui aresta. \n";
			else
				cout << "Vertice: " << i << " Vertice: " << j << " Nao possui aresta. \n";
		}
	}
}

void GrafoListaAdj::adAresta(int i, int j){
	if (i<verticeNum && j<verticeNum && !existeAresta(i,j)){
		vizinhos[ i ].insere( j ); 		
	}
}

GrafoListaAdj::~GrafoListaAdj(){
	delete [] vizinhos;
}
