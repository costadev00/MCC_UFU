#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4] = {1,2,3,4}, b[4]={2,4,6,8}, c[4], k=0,i,j,existe,x;

    for(i=0; i<4;i++){
        for(j=0;j<4;j++){
                if(a[i]==b[j]){
                    if(k==0){
                        c[k] = a[i];
                        k++;
                    }
                    else{
                        existe = 0;
                        for(x=0;x<k;x++){
                            if(c[x] == a[i]){
                                existe = 1;
                            }

                        }
                        if(existe == 0){
                            c[k] = a[i];
                            k++;
                        }
                    }
                }
        }
    }
    for(int y=0;y<k;y++){
            printf("%d\n", c[y]);
    }
    return 0;
}
