#ifndef GRAFOMATRIZ_H
#define GRAFOMATRIZ_H

#include <iostream>
using namespace std;

class GrafoMatriz{

	private:

    	bool** MatrizAdj;
      
    	int verticeCont;

	public:

    	GrafoMatriz(int verticeNum);
 
    	void adAresta(int i, int j) ;
 
		void removeAresta(int i, int j);
 
		bool existeAresta(int i, int j);
 
		void imprimeGrafo();

		void imprimeMatrizGrafo();
      
		~GrafoMatriz();
};

#endif

