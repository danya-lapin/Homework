//
// Created by danya-lapin on 11/4/18.
//

#include <malloc.h>
#include "quicksort.h"

int *init(int elements_number){
    int *array = malloc(elements_number * sizeof(int));
    for(int i = 0; i < elements_number; i++){
        printf("%d massive element: ", i);
        scanf("%d", &array[i]);
    }
    return array;
}

int qsort(int *array, int elements_number)
{
    int pivot = (array[0] + array[elements_number / 2] + array[elements_number - 1]) / 3;
    int temp;
    for(int i = 0; i <= array[pivot]; i++){
        array[i] = array[i];
    }
    int n = 0;
    int b = n + 1;
    for (n; n > array[pivot]; n++) {
        array[n] = array[pivot + b];
        b++;
    }
    printf(array);
    return qsort(*array, elements_number / 2);
}