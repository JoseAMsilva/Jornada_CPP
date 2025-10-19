#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
struct moeda
{
    string nome;
    int valor;
};

bool comp(moeda a, moeda b)
{
    return a.valor > b.valor;
}


int main()
{
    vector<moeda> moedas;
    int N, E, soma;
    soma = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string nome;
        int valor;
        cin >> nome >> valor;
        moedas.push_back({nome, valor});
    }
    cin >> E;
    stable_sort(moedas.begin(), moedas.end(), comp);
    for (int i = 0; i < N; i++)
    {
        if (moedas[i].valor >= E)
        {
            cout << moedas[i].nome << " ";
            cout << moedas[i].valor << endl;
            soma += moedas[i].valor;
        }  
    }
    cout << soma << endl;
    return 0;
}