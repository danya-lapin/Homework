#include <stdio.h>
#include <math.h>
int Bconvert(int a) {
  if (a < 0)
    a = ~(-a) + 1;
  return a;
}
int main() {
    printf("1st number: ");
    int num1 = scanf("%d", &num1);
    printf("2nd number: ");
    int num2 = scanf("%d", &num2);
    int a = num1;
    int Binary1[9];
    int Binary2[9];
    int Sample[8];
    if(num1 < 0){
        Binary1[0] = 1;
    }
    else{
        Binary1[0] = 0;
    }
    if(num2 < 0){
        Binary2[0] = 1;
    }
    else{
        Binary2[0] = 0;
    }
        for(int b = 8; b < 9; b--){
            int n, c;
            n = a / 2;
            c = a % 2;
            Binary1[b] = c;
        }
        a = num2;
    for(int b = 8; b > 0; b--){
        int n, c;
        n = a / 2;
        c = a % 2;
        Binary2[b] = c;
    }

    return 0;
}