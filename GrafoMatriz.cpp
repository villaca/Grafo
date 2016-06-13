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
    if(i<verticeCont && j<verticeCont && !existeAresta(i,j)){
        MatrizAdj[i][j] = true;
 		MatrizAdj[j][i] = true;
	}
}

bool GrafoMatriz::existeAresta(int i, int j){
    if(i<verticeCont && j<verticeCont){
        return MatrizAdj[i][j];
    }
	else
        return false;
}

void GrafoMatriz::imprimeGrafo(){

}

void GrafoMatriz::imprimeMatrizGrafo(){

}

void GrafoMatriz::removeAresta(int i, int j){
    if(existeAresta(i,j)){
        MatrizAdj[i][j] = false;
 		MatrizAdj[j][i] = false;
    }
}

bool GrafoMatriz::nulo(){
    for(int i = 0; i < verticeCont; i++){
        for(int j = 0; j < verticeCont; j++){
            if(MatrizAdj[i][j] == true){
                return false;
            }
        }
    }
    return true;
}

bool GrafoMatriz::completo(){
    for(int i = 0; i < verticeCont; i++){
        for(int j = 0; j < verticeCont; j++){
            if((i != j) && (MatrizAdj[i][j] == false)){
                return false;
            }
        }
    }
    return true;
}

bool GrafoMatriz::kregular(){
    int grauInicial = 0, grauComparado;
    for(int i = 0; i < verticeCont; i++){
        grauComparado = 0;
        for(int j = 0; j < verticeCont; j++){
            if(i = 0){
                if(MatrizAdj[i][j] == true){
                    if(i == j){
                        grauInicial = grauInicial + 2;
                        grauComparado = grauComparado + 2;
                    }
                    else{
                        grauInicial++;
                        grauComparado++;
                    }
                }
            }
            else{
                if(MatrizAdj[i][j] == true){
                    if(i == j){
                        grauComparado = grauComparado + 2;
                    }
                    else{
                        grauComparado++;
                    }
                }
            }


        }
        if(grauInicial != grauComparado){
            return false;
        }
    }
    return true;
}

/*
 * Nao da pra fazer isso com a mesma assinatura de metodo
 * Mudei o nome do metodo pra poder trabalhar, depois resolver essa treta da assinatura
 */

int GrafoMatriz::k_regular(){
    if(kregular()){
        int grau = 0;
        for(int i = 0; i < verticeCont; i++){
            if(MatrizAdj[0][i] == true){
                if(i == 0){
                    grau = grau + 2;
                }
                else{
                    grau++;
                }
            }
        }
        return grau;
    }
    else{
        return -1;
    }
}

GrafoMatriz::~GrafoMatriz() {
    for (int i = 0; i < verticeCont; i++)
        delete[] MatrizAdj[i];
 	delete[] MatrizAdj;
}
