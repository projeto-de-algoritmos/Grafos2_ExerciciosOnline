#include <iostream>
using namespace std;
#include <limits.h>
#include <bits/stdc++.h>

int distanciaMinima(int distancia[], bool mancha[])
{
    int distanciaVertice = INT_MAX, vertice;
 
    for (int v = 0; v < 501; v++)
        if (mancha[v] == false && distancia[v] <= distanciaVertice)
            distanciaVertice = distancia[v], vertice = v;
 
    return vertice;
}

void dijkstra(int grafo[501][501], int verticeOrigem, int verticeDestino)
{
    int distancia[501];
    bool mancha[501];

    for (int i = 0; i < 501; i++)
        distancia[i] = INT_MAX, mancha[i] = false;

    distancia[verticeOrigem] = 0;
 
    for (int count = 0; count < 501 - 1; count++) {
        int u = distanciaMinima(distancia, mancha);

        mancha[u] = true;

        for (int v = 0; v < 501; v++)

            if (!mancha[v] && !(grafo[u][v] == -1) && distancia[u] != INT_MAX && distancia[u] + grafo[u][v] < distancia[v]) {
                  distancia[v] = distancia[u] + grafo[u][v];
                }
    }

    if(distancia[verticeDestino] >= INT_MAX) {
      cout << "Nao e possivel entregar a carta\n";
    }

    else {
      cout << distancia[verticeDestino] << "\n";
    }
};

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

  cin >> vertices;
  cin >> arestas;

  while(vertices != 0 || arestas != 0) {

    Grafo cidade;

    for(int i = 0; i < 501; i++) {
      for(int j = 0; j < 501; j++) {
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

      dijkstra(cidade.grafo, X, Y);
    }

    cin >> vertices;
    cin >> arestas;

    cout << "\n";
  }
 
  return 0;
}