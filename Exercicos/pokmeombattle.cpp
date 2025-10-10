#include <iostream>

using namespace std;

int main()
{
    int E, P;
    int atk = 0;
    cin >> E >> P;

    while (P > 0)
    {
        if (E > 0)
        {
            E -= P;
            atk++;
            P--;
        }
        else
            break;
    }
    
    E > 0 ? cout << "F" << endl : cout << atk << endl;

    return 0;
}