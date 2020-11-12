/*

*/
#include <bits/stdc++.h>
#include <iostream>
int cont = 0;
int par(int n)
{
    if (cont == n)
    {
        return 1;
    }
    cont++;
    return par(n + 2);
}

using namespace std;
int main()
{
    int n = 2, x;
    cout << "Digite ate qual n-esimo termo a sequencia deseja descobrir:\n";
    cin >> x;
    printf("%d", par(x));
    // for (int i = 0; i < x; i++)
    // {
    //     printf("%d ", n);
    //     n += 2;
    // }
    return 0;
}