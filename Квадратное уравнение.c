#include <stdio.h>
#include <math.h>

int main() {
    printf("x = ");
    int x;
    x = scanf("%i", &x);

    printf("a = ");
    int a;
    a = scanf("%d", &a);

    printf("b = ");
    int b;
    b = scanf("%d", &b);

    printf("c = ");
    int c;
    c = scanf("%d", &c);

    double D = b * b - 4 * a * c;
    if(D > 0){
        int i = b * -1;
        double x1 = (i + sqrt(D) / (2 * a));
        double x2 = (i - sqrt(D) / (2 * a));
        printf("x1 = %f", x1);
        printf("x2 = %f", x2);
    }
    else if(D < 0){
        printf("No solutions");
    }
    else {
        int i = b * -1;
        double x1 = (i + sqrt(D) / (2 * a));
        printf("x1 = %f", x1);
    }

    return 0;
}