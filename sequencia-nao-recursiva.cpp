/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Digite ate qual n-esimo termo da sequencia deseja encontrar:\n";
    cin >> n;
    x = -((n * n * n) / 6) + (n * n) + n / 6;
    printf("%d\n", x);
    return 0;
}