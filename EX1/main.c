#include <stdio.h>
#include <stdlib.h>
//static const int tresshold = 16;
#define tresshold 16

int main() {
    int N;
    int competitors_vote[tresshold] = {0};
    printf("number of voters: ");
    scanf("%d", &N);
    int vote;
    for(int i = 0;i < N; i++){
        printf("Number of competitor you vote for: ");
        scanf("%d", &vote);

        for(int p = 1;p <= 16; p++) {
            if (p == vote) {
                competitors_vote[p - 1]++;
            }
        }

    }
    for(int j = 0; j < tresshold; j++){
        printf("%d %d\n", j + 1, competitors_vote[j]);
    }
    return 0;
}