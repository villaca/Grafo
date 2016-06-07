#ifndef GRAFOLISTAADJ_H
#define GRAFOLISTAADJ_H

#include <iostream>

#include "lista.h"

using namespace std;

class GrafoListaAdj
{
	private:

      lista* vizinhos;
      
      int verticeNum;

	public:

      GrafoListaAdj(int vertices);
 
      void adAresta(int i, int j) ;
 
      void removeAresta(int i, int j);
 
      bool existeAresta(int i, int j);
 
  	  void imprimeGrafo();

  	       
	  ~GrafoListaAdj();
	
	
};

#endif
