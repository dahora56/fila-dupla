#ifndef FILA-DUPLA_H_INCLUDED
#define FILA-DUPLA_H_INCLUDED

template <typename T>
struct Fila
{
    T *v;
    int inicio, fim, quantidade, tamanho;

    Fila(int tam)
    {
        tamanho = tam;
        v = new T[tamanho];
        inicio = 0;
        fim = -1;
        quantidade = 0;
    }
    ~Fila()
    {
        delete v;
    }
    void insereIni(T x)
    {
        inicio--;
        if(inicio == tamanho)
            inicio = 0;
        v[inicio] = x;
        quantidade++;
    }
    void insereFim(T x)
    {
        fim++;
        if(fim == tamanho)
            fim = 0;
        v[fim] = x;
        quantidade++;
    }
    T removeInicio()
    {
        T temp = v[inicio];
        inicio++;
        if(inicio == tamanho)
            inicio = 0;
        quantidade--;
        return temp;
    }
    T removeFim()
    {
        T temp = v[fim];
        fim--;
        if(fim == tamanho)
            fim = 0;
        quantidade--;
        return temp;
    }
    T acessoIni()
    {
        return v[inicio];
    }
    T acessoFim()
    {
        return v[fim];
    }
    bool filaVazia()
    {
        return quantidade == 0;
    }
    bool filaCheia()
    {
        return quantidade == tamanho;
    }
};

#endif // FILA-DUPLA_H_INCLUDED
