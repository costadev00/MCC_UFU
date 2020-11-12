#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int vet[n];
    vet[0] = 0;
    vet[1] = 1;
    for(int i=2; i<n; i++) {
        if(i%2==0)
            vet[i] = vet[i-1] + vet[i-2];
        else
            vet[i] = vet[i-1] * vet[i-2];
    }

    for(int i=0; i<n; i++) {
        cout << vet[i] << " " << endl;
    }
    cout << "Resp: " << vet[n-1] << endl;
    return 0;
}
