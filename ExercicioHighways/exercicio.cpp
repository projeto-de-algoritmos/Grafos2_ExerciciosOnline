#include <iostream>
#include <vector>
using namespace std;

struct Coordenadas {
    int x, y;
};

struct Aresta {
    int inicio, fim, meio;
};

int main() {
    int quantidadeCasos, quantidadeVertices, estradasFeitas;

    cin >> quantidadeCasos;

    for(int i = 0; i < quantidadeCasos; i++){
        cin >> quantidadeVertices;
        vector<Coordenadas> cidades(quantidadeVertices);

        for(int i = 0; i < quantidadeVertices; i++){
            cin >> cidades[i].x >> cidades[i].y;
        }

        vector<Aresta> arestas;

        for(int i = 0; i < quantidadeVertices; i++){
            for(int j = i + 1; j < quantidadeVertices; j++){

                int distancia = (cidades[i].x - cidades[j].x) * (cidades[i].x - cidades[j].x) + (cidades[i].y - cidades[j].y) * (cidades[i].y - cidades[j].y);

                arestas.push_back({i, j, distancia});
            }
        }

        cin >> estradasFeitas;

        for (int i = 0; i < estradasFeitas; i++) {
            int cidadeOrigem, cidadeDestino;
            cin >> cidadeOrigem >> cidadeDestino;
        }
    }

    return 0;
}
