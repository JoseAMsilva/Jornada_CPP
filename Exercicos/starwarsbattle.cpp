#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int Matriz[N][N];
    string linha;

    for (int i = 0; i < N; i++)
    {
        cin >> linha;
        for (int j = 0; j < N; j++)
        {
            Matriz[i][j] = linha[j] - '0';
        }
    }

    int X, Y;
    int navesAbatidas = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> X >> Y;

        for (int k = X - 1; k >= 0; k--)
        {
            if (Matriz[k][Y] == 1)
            {
                navesAbatidas++;
                Matriz[k][Y] = 0;
                break;
            }
        }
    }
    
    cout << navesAbatidas << endl;
    return 0;
}