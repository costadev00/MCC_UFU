#include <iostream>

using namespace std;

int main() {

   int n=0,acm=1;
    co >>("%d", &n);

     for (int i = 2; i <= sqrt(n) && acm !=0; i++) {
        if (n % i != 0) {
           acm = 1;
        }else{
            acm = 0;
        }
 }
    if(acm == 1) {
        printf("Prime\n");
     }
    else{
        printf("Not Prime");
    }

    return 0;
}
