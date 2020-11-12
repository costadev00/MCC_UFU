#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area,raio, n=3.14159;
    scanf("%lf",&raio);
    area = n*(raio*raio);

    printf("A=%.4lf\n",area);
    return 0;
}
