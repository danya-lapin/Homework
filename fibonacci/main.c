#include <stdio.h>
int Fi(int n){
    if(n == 1 || n == 2) {
        return 1;
    }
    return Fi(n - 1) + Fi(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", Fi(i));

    return 0;
}