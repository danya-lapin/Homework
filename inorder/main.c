#include <stdio.h>
#define QUANTITY 10

int main() {
    int quantity;
    printf("input quantity");
    scanf("%u", &quantity);
    int array[QUANTITY] = {0};
    int zero_quantity = 0;
    int positive[QUANTITY] = {0};
    int count = 0;

    for(int i = 1; i <= quantity; i++){
        printf("Input %u number ", i);
        scanf("%d", &array[i]);
    }
    for (int j = 0; j < quantity; j++) {
        if(array[j] < 0){
            return array[j];
        }
        else if(array[j] == 0){
            zero_quantity++;
        }
        else if(array[j] > 0) {
            positive[count] = array[j];
            count++;
        }
    }
    for (int k = 0; k < count; k++) {
        printf("%u", positive[k]);
    }
    for (int l = 0; l < zero_quantity; l++) {
        printf("0");
    }
    return 0;
}