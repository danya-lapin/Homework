#include <stdio.h>

int main() {
    int sz = 10;
    printf("Укажите 10 элементов массива: ");
    scanf("%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
    int array[sz];
    scanf("%d", &sz);
    for(int i = 0; i < sz; i++){
        int max = int array[i];
        if(int array[i] >= max){
            max = array[i];
        }
    }
    for(int i = 0; i < sz; i++){
        int min = int array[i];
        if(int array[i] >= max){
            min = array[i];
        }
    }
    int avr = (a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10) / 10;
    printf("Average: %d", avr);
    printf("Max number is: %d", max);
    printf("Min number is: %d", min);
    return 0;
}