#include <stdio.h>

#include <stdlib.h>

int main() {
    int vet1[5], vet2[5], vet3[10];

    for (int i = 0; i < 5; i++) {
      scanf("%d", & vet1[i]);
      scanf("%d", & vet2[i]);
    }

    for (int i = 0; i < 5; i++) {
            vet3[i] = vet1[i];
            for(int i=0; i<5; i++){
                if(vet3[i] == vet2[i]){
                    vet3[i]  = vet2[i];
                }
            }
      }

      for (int i = 5; i < 10; i++) {
          if(vet3[i] == vet2[i]){
            vet3[i] = vet3[i];
          }
    }

       for (int i = 0; i <= 10; i++) {
        printf("vet3[%d] = %d\n",i ,vet3[i]);
      }

      return 0;
    }
