#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, e;
    scanf("%d",&e);
    for(int i=0; i<e; i++){
    scanf("%d",&a);
    scanf("%d",&b);
    do{
    c = a%b;
    if(c != 0){
        a = b;
        b = c;
    }
}while(c!=0);
if(c==0){
    printf("%d\n",b);
}
}
}
