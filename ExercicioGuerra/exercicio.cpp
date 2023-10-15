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

  return 0;
}