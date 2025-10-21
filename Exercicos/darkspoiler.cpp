#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct data {
    int dia;
    int mes;
    int ano;
};
bool comp(data a, data b)
{
    return (a.ano < b.ano) || (a.ano == b.ano && a.mes < b.mes) || (a.ano == b.ano && a.mes == b.mes && a.dia < b.dia);
}

int main() {
    vector<data> datas;
    int dia, mes, ano;

    while (cin >> dia >> mes >> ano)
    {
        datas.push_back({dia, mes, ano});
    }

    stable_sort(datas.begin(), datas.end(), comp);

    for (int i = 0; i < datas.size(); i++)
    {
        cout << datas[i].dia << " " << datas[i].mes << " " << datas[i].ano << endl;
    }
    return 0;
}
