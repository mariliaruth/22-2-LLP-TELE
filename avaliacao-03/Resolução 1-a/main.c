#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    float a, b, c, delta, x1, x2;
    printf("f(x) = ax² + bx + c\n\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);
    printf("\nf(x) = %8.2fx² + %8.2fx + %8.2f\n", a, b, c);
    delta = b*b - 4 * a * c;
    if(delta < 0)
    {
        printf("Raízes Imaginárias");
    }
    else
    {
        if(delta == 0)
        {
            x1 = -b / (2 * a);
            printf("\nDELTA = %8.2f \nx' = %8.2f\n\n", delta, x1);  }
        else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nDELTA = %8.2f \nx' = %8.2f\nx'' = %8.2f\n\n", delta, x1, x2);  }
    }
    return 0;
}
