#include <cmath>

struct Vertice{
    int rotulo;
    double x, y;
    int g;
    int* vizinhos;
    Vertice* proximoVertice;
};

struct ListaAdjacencia {
    int proximoNumero;
    Vertice* primeiroVertice;
};

class Grafo{
  public:
    Grafo();
    ~Grafo();
    void InsereVertice();
    Vertice* getVertices();
    Vertice* ObterVerticePorRotulo(int rotulo);


  private:
     ListaAdjacencia* vertices;
};
/*
// Distância euclidiana de a para b.
double Distancia(Vertice a, Vertice b) {
    double x = (a.x - b.x), y = (a.y - b.y);
    return sqrt(x*x + y*y);
}
// Coeficiente da reta que passa na origem e p.
double Inclinação(Vertice p) {
    return atan2(p.y, p.x); 
}
// Coeficiente da reta orientada de p para q.
double InclinaçãoRelativa(Vertice p, Vertice q) {
    return atan2(q.y - p.y, q.x - p.x);
}
// Determina se ao caminhar de a para b e depois de b para c estamos fazendo uma curva `a esquerda, `a direita, ou seguindo em frente.
int TipoCurva(Vertice a, Vertice b, Vertice c) {
    double v = a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y);
    if (v < 0) return -1; // esquerda.
    if (v > 0) return +1; // direita.
    return 0; // em frente.
}
*/