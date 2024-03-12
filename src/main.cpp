//#define NDEBUG
#include <iostream>
#include <cassert>
#include "grafo.hpp"

using namespace std;

int main() {
    int qtdVertices, qtdArestas;
    int coordenadaX, coordenadaY, grau, vizinho;

    cout << "Digite a quantidade de Vertices e Arestas: <n> <m>" << endl;
    cin >> qtdVertices >> qtdArestas;

    // Cria o objeto Grafo
    Grafo novoGrafo;

    for(int i = 0; i < qtdVertices; i++){
        novoGrafo.InsereVertice();
        
        // Atribui o rótulo (índice) ao vértice recém-criado
        novoGrafo.getVertices()[i].rotulo = i;  

        // Le a coordenada do vertice
        cout << "Digite a coordenada x e y do vertice " << i << ": " <<endl;
        cin >> coordenadaX >> coordenadaY;
        novoGrafo.getVertices()[i].x = coordenadaX;
        novoGrafo.getVertices()[i].y = coordenadaY;
    
        //cout << "Digite a quantidade de vizinhos de " << i << " e depois os vizinhos: <n> <v1> ... <vn>" << endl;
        //Le o grau do vertice
        cout << "Digite o grau do vertice " << i << ": " <<endl;
        cin >> grau;
        novoGrafo.getVertices()[i].g = grau; 
        novoGrafo.getVertices()[i].vizinhos = new int[grau];

        //insere rotulos ao inves de usar arestas
        for(int j = 0; j < grau; j++){
            assert(novoGrafo.getVertices()[i].vizinhos != nullptr);
            
            int rotuloVizinho;
            cout << "Digite os "<< grau << " vizinhos do vertice " << i << ": " <<endl;
            cin >> rotuloVizinho;
            novoGrafo.getVertices()[i].vizinhos[j] = rotuloVizinho;
        }
    }

}