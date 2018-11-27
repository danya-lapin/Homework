#include <stdio.h>
#include <math.h>
int InputA(int a){
    printf("a = ");
    a = scanf("%d", &a);
}
int InputB(int b){
    printf("b = ");
    b = scanf("%d", &b);
}
int InputC(int c){
    printf("c = ");
    c = scanf("%d", &c);
}
double If1(int a, int b, double D) {
    if (D > 0) {
        double x1 = (-b + sqrt(D) / (2 * a));
        double x2 = (-b - sqrt(D) / (2 * a));
    } else if (D == 1) {
        double x1 = (-b / (2 * a));
        printf("x1 = %f", x1);
    } else if (D <= 0) {
        printf("No solutions");
    }
}


double Df(int a,int b,int c) {
    double D = b^2 - (4 * a * c);
    printf("%f", D);
}
double D1(int a, int b, double D){
if (D > 0){
double x1 = (-b + sqrt(D) / (2 * a));
double x2 = (-b - sqrt(D) / (2 * a));
printf("x1 = %f", x1);
printf("x2 = %f", x2);
}
}
int main() {
    int a = InputA(a);
    int b = InputB(b);
    int c = InputC(c);
    double D = Df(a, b, c);
    double If1(int a,int b, double D);
    return 0;
}