#include <stdio.h>
void gnome_sort(int array[], int sz) {
    int b;
    for (int a = 1; a < sz;) {
        if (array[a - 1] <= array[a]) {
            a++;
        } else {
            b = array[a];
            array[a] = array[a - 1];
            array[a - 1] = b;
            --a;
            if (a == 0)
                a = 1;
        }
    }
}
int main() {
    int array[10] = {4, 1, 8, 2, 5, 3, 11, 6, 9, 7};
    gnome_sort(array, 10);
    printf("%i", array[]);
    return 0;
}