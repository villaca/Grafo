#include "GrafoMatriz.h"

GrafoMatriz::GrafoMatriz (int verticeNum) {
	verticeCont = verticeNum;
	MatrizAdj = new bool*[verticeCont];
	for (int i = 0; i < verticeCont; i++) 
	{
		MatrizAdj[i] = new bool[verticeCont];
		for (int j = 0; j < verticeCont; j++)
			MatrizAdj[i][j] = false;
 	}
 }
 
 void GrafoMatriz::adAresta(int i, int j){ 	
 	if(i<verticeCont && j<verticeCont && !existeAresta){
 		Matriz[i][j] = true;
	 } 	
 }
 
 bool GrafoMatriz::existeAresta(int i, int j){
 	if(i<verticeCont && j<verticeCont){
 		if(Matriz[i][j] == true)
 		return true;
	 }
	 else
	 	return false;
 	
 }
 
 void GrafoMatriz::imprimeGrafo(){
 	
 }
 
 void GrafoMatriz::imprimeMatrizGrafo(){
 	
 }
 
 void GrafoMatriz::removeAresta(int i, int j){
 	
 }
 
 GrafoMatriz::~GrafoMatriz() {
 	for (int i = 0; i < verticeCont; i++)
 		delete[] MatrizAdj[i];
 	delete[] MatrizAdj;
 }
