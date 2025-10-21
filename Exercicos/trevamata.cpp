#include <iostream>
#include <vector>
using namespace std;
struct amigo
{
    string nome;
    int peso;
};

int main()
{
    vector<amigo> amigos;
    int N, C;
    bool ultrapassou = false;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string nome;
        int peso;
        cin >> nome >> peso;
        amigos.push_back({nome, peso});
    }
    cin >> C;

    for (int i = 0; i < N; i++)
    {
        if (amigos[i].peso > C)
        {
            ultrapassou = true;
        }
    }
    if (ultrapassou)
    {
        cout << "Vamos virar almoco de aranhas gigantes!" << endl;
        for (int i = 0; i < N; i++)
        {
            if (amigos[i].peso > C)
            {
                cout << amigos[i].nome << endl;
            }
        }
    }
    else
        cout << "Vamos todos encontrar a montanha!" << endl;
    
    return 0;
}