//Mateus Freitas help done

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    int a[4] = {1,2,3,4}, b[4] = {3,4,5,6};
    int c[8], k=0, existe;

    for(int i=0; i<4; i++) {
        existe=0;
        for(int j=0; j<k; j++) {
            if (a[i] == c[j])
                existe=1;
        }
        if(existe == 0)
            c[k++] = a[i];
    }

    for(int i=0; i<4; i++) {
        existe=0;
        for(int j=0; j<k; j++) {
            if (b[i] == c[j])
                existe=1;
        }
        if(existe == 0)
            c[k++] = b[i];
    }


    for(int i=0; i<k; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
