#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float x, y,r;
    scanf("%d",&n);
   for(int i=0;i<n;i++){

   scanf("%f",&x);
   scanf("%f",&y);
    if(y!=0){
        r = x/y;
        printf("%.1f\n",r);
    }
    else{
     printf("divisao impossivel\n");
    }
}
    return 0;
}
