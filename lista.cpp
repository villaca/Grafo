#include "lista.h"


bool lista::vazia(){
  return (prim==NULL);
}

void lista::insere(const int& novo){
  elo *p;  
  p = new elo(novo);
  p->prox=prim;
  prim = p;

}


bool lista::remove(const int& elem){
  elo *p, *ant; 
  
  for(p=prim; ((p!=NULL) && (p->dado!=elem)); p=p->prox)
    ant=p;
  
  if (p==NULL) return false;
  if (p==prim) prim=prim->prox;
  else ant->prox=p->prox;
  delete p;
  return true;
}


int lista::tamanho() const {
  int tam=0;
  elo *p;

  for(p=prim;p!=NULL; p=p->prox)
    tam++;
  return tam;
}

void lista::imprime() const {
  elo *p;
// cout << " L : ";
  for(p=prim;p!=NULL; p=p->prox)
  {
    cout << p->dado;
  if (p -> prox)  cout << " , " ;
  }
}  


lista::~lista(){
 elo *p=prim;
 while(prim!=NULL) {
 p=prim->prox;
 delete prim;
prim=p;
 }
}


bool lista::busca(int elem){
  elo *p; 
  int i;
  if (! vazia()){        
    for(i = 1, p = prim; (p!=NULL); i++, p=p->prox){
      if (p->dado == elem)
        return true;      
    }
    return false;
  }
  return false;
}
