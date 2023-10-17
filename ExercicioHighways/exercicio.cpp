#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

struct Coordenadas {
    int x, y;
};

struct Aresta {
    int inicio, fim, distancia;
};

int quantidadeArestas, arvoresDistintas;
vector<int> conjuntoArvores;

int find(int i);
void uniaoArvores(int x, int y);
void inicializarArvores(int n);
int kruskal(vector<Aresta>& arestas);
bool comparaArestas(const Aresta& a, const Aresta& b);

int main() {
    int quantidadeCasos, quantidadeVertices, estradasFeitas;

    cin >> quantidadeCasos;

    while(quantidadeCasos--){
        cin >> quantidadeVertices;
        vector<Coordenadas> cidades(quantidadeVertices);

        for(int i = 0; i < quantidadeVertices; i++){
            cin >> cidades[i].x >> cidades[i].y;
        }

        quantidadeArestas = 0;
        
        vector<Aresta> arestas;

        for(int i = 0; i < quantidadeVertices; i++){
            for(int j = i + 1; j < quantidadeVertices; j++){

                int distancia = (cidades[i].x - cidades[j].x) * (cidades[i].x - cidades[j].x) + (cidades[i].y - cidades[j].y) * (cidades[i].y - cidades[j].y);

                arestas.push_back({i, j, distancia});
            
                quantidadeArestas++;
            }
        }

        sort(arestas.begin(), arestas.end(), comparaArestas);

        conjuntoArvores.clear();

        inicializarArvores(quantidadeVertices);
        
        cin >> estradasFeitas;

        for (int i = 0; i < estradasFeitas; i++) {
            int cidadeOrigem, cidadeDestino;
            
            cin >> cidadeOrigem >> cidadeDestino;
            
            uniaoArvores(cidadeOrigem - 1, cidadeDestino - 1);
        }

        int construcoes = kruskal(arestas);

        if(quantidadeCasos){
            printf("\n");
        }
    }

    return 0;
}

int kruskal(vector<Aresta>& arestas) {
    int novasEstradas = 0;

    for (int i = 0; i < quantidadeArestas && arvoresDistintas > 0; i++) {
        int verticeInicio = find(arestas[i].inicio);
        int verticeFim = find(arestas[i].fim);

        if (verticeInicio != verticeFim) {
            uniaoArvores(verticeInicio, verticeFim);
            printf("%d %d\n", arestas[i].inicio + 1, arestas[i].fim + 1);
            novasEstradas++;
        }
    }

    if (novasEstradas == 0) {
        printf("No new highways need\n");
    }

    return arvoresDistintas == 0;
}

bool comparaArestas(const Aresta& a, const Aresta& b) {
    return a.distancia < b.distancia;
}

void inicializarArvores(int n) {
    conjuntoArvores.resize(n);

    for (int i = 0; i < n; i++) {
        conjuntoArvores[i] = i;
    }

    arvoresDistintas = n - 1;
}

int find(int i) {
    if (conjuntoArvores[i] == i) {
        return i;
    } else {
        return (conjuntoArvores[i] = find(conjuntoArvores[i]));
    }
}

void uniaoArvores(int x, int y) {
    int arvore_A = find(x);

    int arvore_B = find(y);

    if (arvore_A != arvore_B) {
        conjuntoArvores[arvore_A] = arvore_B;
        arvoresDistintas--;
    }
}
