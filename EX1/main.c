#include <stdio.h>
#include <stdlib.h>
static const int tresshold = 16;

int main() {
    int N;
    int competitors_vote[tresshold];
    printf("number of voters: ");
    scanf("%d", &N);
    int vote;
    for(int i = 0;i < N; i++){
        printf("Number of competitor you vote for: ");
        scanf("%d", &vote);
        for(int p = 1;p <= 16; p++) {
            if (p == vote) {
                competitors_vote[p]++;
            }
        }

    }
    for(int j = 0; j < N; j++){
        printf("%d", competitors_vote[j]);
    }
    return 0;
}