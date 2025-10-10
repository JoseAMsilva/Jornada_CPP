#include <iostream>

using namespace std;

int main()
{
    char z, g;
    char d, c;
    cin >> z >> g;

    cin >> d >> c;

    if (d == z)
    {
        cout << "Driblado" << endl;
        if (c == g)
        {
            cout << "Gol" << endl;
        }
        else
        {
            cout << "...e o goleiro pega" << endl;
        }
    }
    else
    {
        cout << "Bloqueado" << endl;
    }
    return 0;
}