#include <stdio.h>
#include <stdlib.h>
#define QUANTITY 10

int main() {
    int quantity;
    int x[QUANTITY] = {0};
    int y[QUANTITY] = {0};
    int max_abs = 0;
    int max_x;
    int max_y;
    printf("Number of dots");
    scanf("%d", &quantity);
    for(int j = 0; j < quantity; j++) {
        printf("Dot № %d", j + 1);
        scanf("%d %d \n", &x[j], &y[j]);
    }
    for (int i = 0; i < quantity; i++) {
        if(abs(x[i] - y[i]) > max_abs){
            max_abs = abs(x[i]- y[i]);
            max_x = x[i];
            max_y = y[i];
        }
    }

    return 0;
}