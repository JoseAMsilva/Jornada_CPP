#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<string, pair<int, int>>> padawans;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string nome;
        int missoes;
        int inconcluidas;
        cin >> nome >> missoes >> inconcluidas;
        padawans.push_back({nome, {missoes, inconcluidas}});
    }
    sort(padawans.begin(), padawans.end());
    for (int i = 0; i < N; i++)
    {
        cout << padawans[i].first << " " << padawans[i].second.first - padawans[i].second.second << endl;
    }
    return 0;
}