#include <iostream>
#include <vector>
using namespace std;

struct Missao {
    int XP;
    int bonus;
};

int main() {
    int N, M, A, totalXP = 0;
    cin >> N;

    vector<Missao> missoes(N); 

    for (int i = 0; i < N; i++) {
        cin >> missoes[i].XP;
    }


    for (int i = 0; i < N; i++) {
        cin >> missoes[i].bonus;
    }

    cin >> M;
    cin >> A;

    for (int i = 0; i < N; i++)
    {
        missoes[i].bonus += A;
    }

    for (int i = 0; i < N; i++)
    {
        totalXP += missoes[i].XP * missoes[i].bonus;
    }

    if (totalXP >= M)
    {
        cout << "Upou de Nivel!" << endl;
    }

    else
    {
        cout << "Nao foi dessa vez!" << endl;
    }

    return 0;
}