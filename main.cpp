#include <iostream>
#include "fila-dupla.h"

using namespace std;

int main()
{
    cout << "Fila Alocacao Sequencial\nJoao Victor Oliveira da Hora\nADS Manha - 3o Ciclo\n" << endl;
    int opc, valor, valTamanho;

    cout << "Digite um valor para o tamanho da fila: ";
    cin >> valTamanho; cout << "\n";

    Fila<int> f(valTamanho);

    do
    {
        cout << "Escolha uma opcao:\n1 - Inserir no Inicio\n2 - Inserir no Fim\n3 - Remover Primeiro\n4 - Remover Final\n5 - Primeiro Item\n6 - Ultimo Item\n7 - Exibir Fila\n9 - Fim\n\nEscolha: ";
        cin >> opc; cout << "\n";

        switch(opc)
        {
        case 1:
            if(f.filaCheia())
                cout << "A fila esta cheia!" << endl;
            else
            {
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                f.insereIni(valor);
                cout << "\n";
            }
            break;
        case 2:
            if(f.filaCheia())
                cout << "A fila esta cheia!" << endl;
            else
            {
                cout << "Digite o valor a ser inserido: ";
                cin >> valor;
                f.insereFim(valor);
                cout << "\n";
            }
            break;
        case 3:
            if(f.filaVazia())
                cout << "A fila esta vazia!" << endl;
            else
                f.removeInicio();
            break;
        case 4:
            if(f.filaVazia())
                cout << "A fila esta vazia!" << endl;
            else
                f.removeFim();
            break;
        case 5:
            cout << "Primeiro valor enfileirado: " << f.acessoIni() << endl;
            break;
        case 6:
            cout << "Ultimo valor enfileirado: " << f.acessoFim() << endl;
            break;
        case 7:
            if(f.filaVazia())
                cout << "A fila esta vazia!\n" << endl;
            else
            {
                if(f.inicio <= f.fim)
                {
                    for(int i = f.inicio; i <= f.fim; i++)
                    {
                        cout << f.v[i] << endl;
                    }
                }
                else
                {
                    for(int i = f.inicio; i < f.tamanho; i++)
                    {
                        cout << f.v[i] << endl;
                    }
                    for(int i = 0; i <= f.fim; i++)
                    {
                        cout << f.v[i] << endl;
                    }
                }
            }
            break;
        case 9:
            cout << "\nFIM DA APLICACAO";
            break;
        }
    }while(opc != 9);
    return 0;
}
