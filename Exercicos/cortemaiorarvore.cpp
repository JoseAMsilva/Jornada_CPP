#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct arvore
{
    string nome;
    int altura;
};
bool comp(arvore a, arvore b)
{
    return a.altura > b.altura;
}

int main()
{
    vector<arvore> arvores;
    int N, C;
    cin >> N >> C;
    
    for(int i = 0; i < N; i++)
    {
        string nome;
        int altura;
        cin >> nome >> altura;
        arvores.push_back({nome, altura});
    }
    cout << endl;
    stable_sort(arvores.begin(), arvores.end(), comp);
    for(int i = 0; i < C; i++)
    {
        cout << arvores[i].nome << endl;
    }
    return 0;
}