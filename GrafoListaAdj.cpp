#include "GrafoListaAdj.h"

GrafoListaAdj::GrafoListaAdj(int Nvertices) {
	if (Nvertices > 0) {
		vizinhos = new lista[ Nvertices ];
 		verticeNum = Nvertices;
	}
}
void GrafoListaAdj::removeAresta(int i, int j){
	if(i<verticeNum && j<verticeNum){
		
	}
}

bool GrafoListaAdj::existeAresta(int i, int j){
	if(i<verticeNum && j<verticeNum){
		if(vizinhos[i] != )
	}
	else
		return false;
}

void GrafoListaAdj::imprimeGrafo(){
	
}

void GrafoListaAdj::adAresta(int i, int j){
	if (i<verticeNum && j<verticeNum && !existeAresta){
		vizinhos[ i ].insere( j );
 		vizinhos[ j ].insere( i );
	}
} 

GrafoListaAdj::~GrafoListaAdj(){
	delete [] vizinhos;
}
