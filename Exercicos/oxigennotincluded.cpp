#include <iostream>

using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    if (X > Y * 9)
    {
        int falta = 0;
        cout << "Preicisa de mais difusores!" << endl;
        while (Y * 9 < X)
        {
            falta++;
            Y++;
        }
        cout << falta << endl;
    }
    else
    {
        cout << "Lar doce lar" << endl;
    }

    return 0;
}