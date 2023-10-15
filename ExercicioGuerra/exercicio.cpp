#include <iostream>
using namespace std;
#include <limits.h>
#include <bits/stdc++.h>

class Grafo {
  public:
    int grafo[501][501] = {};
 
    void insereAresta(int v, int w, int custo) {

      if(grafo[w][v] != -1) {
        grafo[v][w] = 0;
        grafo[w][v] = 0;
      } 

      else {
        grafo[v][w] = custo;
      }
    }
};

int main(){
  int vertices, arestas;
  int array[500][500];

  cin >> vertices;
  cin >> arestas;

  while(vertices != 0 || arestas != 0) {

    Grafo cidade;

    for(int i = 0; i < 500; i++) {
      for(int j = 0; j < 500; j++) {
        cidade.grafo[i][j] = -1;
      }
    };

    int X, Y, custo;
    int consultas;

    for(int i = 0; i < arestas; i++) {
      cin >> X;
      cin >> Y;
      cin >> custo;
      cidade.insereAresta(X, Y, custo);
    }

    cin >> consultas;

    for(int j = 0; j < consultas; j++){
      cin >> X;
      cin >> Y;

      array[j][j] = X;
      array[j+1][j+1] = Y;
    }

    cin >> vertices;
    cin >> arestas;

    cout << "\n";
  }
 
  return 0;
}