/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector<int> vet;
    while (cin >> x)
    {
        vet.push_back(x);
    }
    sort(vet.begin(), vet.end());
    int n = vet.size();
    int md = n / 2;
    float res = 0;
    if (n % 2 == 0)
    {

        res = vet[md - 1] + vet[md];
        cout << res / 2 << endl;
    }
    else
    {
        cout << vet[md] << endl;
    }

    return 0;
}