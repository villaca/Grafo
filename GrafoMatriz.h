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
      bool kregular(); // retorna true se o grafo eh k-regular
      int k_regular(); // retorna k se o grafo eh k-regular, caso contrario retorna -1
      bool nulo(); // retorna true se o grafo eh nulo
      bool completo(); // retorna true se o grafo eh completo
      void complemento(const GrafoMatriz G); // o grafo que chama a funcao recebe o complemento de G
  	  void imprimeGrafo(); // Imprime os conjuntos V e E
  	  void imprimeMatrizGrafo();
	  ~GrafoMatriz();
};

#endif
