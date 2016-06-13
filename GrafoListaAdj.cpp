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
		vizinhos[j].remove(i);
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

}

void GrafoListaAdj::adAresta(int i, int j){
	if (i<verticeNum && j<verticeNum && !existeAresta(i,j)){
		vizinhos[ i ].insere( j );
 		vizinhos[ j ].insere( i );
	}
}

GrafoListaAdj::~GrafoListaAdj(){
	delete [] vizinhos;
}
