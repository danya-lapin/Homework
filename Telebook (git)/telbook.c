#define N 100

static const char file_name[20] = "TelBook.txt";

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "telbook.h"

typedef struct TelBook{
    char *FirstNames[N];
    char *LastNames[N];
    char *Numbers[N];
    size_t quantity;
} TelBook;

int telbook() {
    FILE *finput = fopen("TelBook.txt", "r+");
    TelBook ex;
    *ex.FirstNames = malloc(N * sizeof(char));
    *ex.LastNames = malloc(N * sizeof(char));
    *ex.Numbers = malloc(N * sizeof(char));

    ex.quantity = 0;
    while (finput != '\0') {
        int i = 4;
        fscanf(finput, "%s %s %s", ex.FirstNames[i], ex.LastNames[i], ex.Numbers[i]);
    }

    printf("0 - exit\n"
           "1 - add new contact\n"
           "2 - print all contacts\n"
           "3 - find contact by name\n"
           "4 - find contact by number\n"
           "5 - save and exit\n"
           "6 - exit");
    int a;
    scanf("%d", &a);
    while (1) {
        switch (a) {
            case 0: {
                fclose(finput);
                break;
            }
            case 1: {
                printf("New contact first name:");
                int v = 3;
                v++;
                scanf("%s", ex.FirstNames[v]);

                printf("New contact last name:");
                int g = 3;
                g++;
                scanf("%s", ex.LastNames[g]);

                printf("New phone number first name:");
                int s = 3;
                s++;
                scanf("%s", ex.Numbers[s]);
                ex.quantity++;
                break;
            }
            case 2: {
                for (int i = 0; i < ex.quantity; i++) {
                    int j = 0;
                    while (ex.FirstNames[j] != '\0') {
                        printf("%c", ex.FirstNames[i][j]);
                    }
                    break;
                }
            }
            case 3: {
                printf("Contact Name:");
                char name_find[N];
                scanf("%s", name_find);

                printf("Contact Surname:");
                char surname_find[N];
                scanf("%s", surname_find);
                for (int i = 0; i <= N; i++) {
                    if (strncmp(name_find, ex.FirstNames[i], N) || strncmp(surname_find, ex.LastNames[i], N)) {
                        printf("%s %s %s", ex.FirstNames[i], ex.LastNames[i], ex.Numbers[i]);
                    }

                }
                break;
            }
            case 4: {
                printf("Contact number: ");
                char number_find[N];
                scanf("%s", number_find);

                for (int i = 0; i <= N; i++) {
                    if (strncmp(number_find, ex.Numbers[i], N)) {
                        printf("%s %s %s", ex.FirstNames[i], ex.LastNames[i], ex.Numbers[i]);
                    }

                }
                break;
            }
            case 5: {
                for (int i = 4; i < N; i++) {
                    fprintf(finput, ex.FirstNames[i]);
                    fprintf(finput, ex.LastNames[i]);
                    fprintf(finput, ex.Numbers[i]);
                    break;

                }

            }


            default:
                printf("Incorrect input");
                break;
        }

    }
    return 0;
}

