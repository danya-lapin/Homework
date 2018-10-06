#include <stdio.h>

int fact(int n){
    for (int i = 1; i <= n; i++) {
        n = n * fact(n - 1);
    }

}
    int main() {
        int n;
        scanf("%d", &n);
        printf("%d", fact(n));
        return 0;
    }
