#include <stdio.h>
#include <math.h>

int main() {
    printf("a = ");
    int a;
    a = scanf("%d", &a);

    printf("b = ");
    int b;
    b = scanf("%d", &b);

    printf("c = ");
    int c;
    c = scanf("%d", &c);

    double D = b^2 - (4 * a * c);
    if(D > 0){
        int i = b * -1;
        double x1 = (-b + sqrt(D) / (2 * a));
        double x2 = (i - sqrt(D) / (2 * a));
        printf("x1 = %f", x1);
        printf("x2 = %f", x2);
    }
    else if(D == 0){
        int i = b * -1;
        double x1 = (i / (2 * a));
        printf("x1 = %f", x1);
    }
    else if(D < 0){
        printf("No solutions");
    }

    return 0;
}