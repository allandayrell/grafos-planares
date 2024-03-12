#include "grafo.hpp"

Grafo::Grafo() {
    this->vertices = new ListaAdjacencia();
    this->vertices->proximoNumero = 0;
    this->vertices->primeiroVertice = nullptr;
}

Grafo::~Grafo() {
  
}


void Grafo::InsereVertice() {
    Vertice* v = new Vertice;
    v->rotulo = this->vertices->proximoNumero;
    v->x = -1;
    v->y = -1;
    v->g = 0;
    v->vizinhos = nullptr;
    v->proximoVertice = nullptr;

    if (this->vertices->primeiroVertice == nullptr) {
        this->vertices->primeiroVertice = v;
    } else {
        Vertice* copia = this->vertices->primeiroVertice;
        copia->proximoVertice = v;
    }

    this->vertices->proximoNumero += 1;
}

Vertice* Grafo::getVertices() {
    if (vertices && vertices->primeiroVertice) {
        return vertices->primeiroVertice;
    } else {
        return nullptr;
    }
}

Vertice* Grafo::ObterVerticePorRotulo(int rotulo) {
    Vertice* atual = vertices->primeiroVertice;
    while (atual != nullptr) {
        if (atual->rotulo == rotulo) {
            return atual;
        }
        atual = atual->proximoVertice;
    }
    return nullptr;
}
