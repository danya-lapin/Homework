#include "telbook.h"
#include <stdio.h>
#include <string.h>

typedef struct HashTB{
    char *FirstNames[100];
    char *LastNames[100];
    char *Numbers[100];
} HashTable;

int telbook(){

    FILE *Fout = fopen("FNames.txt", "r+");
    FILE *Lout = fopen("LNames.txt", "r+");
    FILE *Nout = fopen("Numbers.txt", "r+");

    HashTable ex;
    strcpy(ex.FirstNames, "FNames.txt");
    strcpy(ex.LastNames, "LNames.txt");
    strcpy(ex.Numbers, "Numbers.txt");

    printf("0 - exit\n"
           "1 - add new contact\n"
           "2 - print all contacts\n"
           "3 - find contact by name\n "
           "4 - find contact by number\n"
           "5 - save and exit");
    int a;// =
    scanf("%d", &a);
    if (a == 0) {
        int fclose(FILE *Fout);
        int fclose(FILE *Lout);
        int fclose(FILE *Nout);
    } else if (a == 1) {
        printf("New contact first name:");
        int v = 3;
        v++;
        char Fnames[v];
        scanf("%c", &Fnames[v]);


        printf("New contact last name:");
        int g = 3;
        g++;
        char Lnames[g];
        scanf("%c", &Lnames[v]);

        printf("New phone number first name:");
        int s = 3;
        s++;
        char Numbers[v];
        scanf("%c", &Numbers[s]);
    } else if (a == 2) {

        for (int i = 0; i <= 20; i++) {
            printf("%c", ex.FirstNames[i], ex.LastNames[i]);
        }
    } else if (a == 3) {
        printf("Contact Name:");
        char name_find;
        scanf("%c", &name_find);

        printf("Contact Surname:");
        char surname_find;
        scanf("%c", &surname_find);
        for (int i = 0; i <= 20; i++) {
            if (name_find == ex.FirstNames[i] || surname_find == ex.LastNames[i]) {
                return ex.FirstNames[i], ex.LastNames[i], ex.Numbers[i];
            }
        }
    } else if (a == 4) {
        printf("Contact number: ");
        char number_find;
        scanf("%c", &number_find);

        for (int i = 0; i <= 20; i++) {
            if (number_find == ex.Numbers[i]) {
                return ex.FirstNames[i], ex.LastNames[i], ex.Numbers[i];
            }

        }
    } else if (a == 5) {
        for (int i = 4; i < 10000; i++) {
            fprintf(&Fout, ex.FirstNames[i]);
            fprintf(&Lout, ex.LastNames[i]);
            fprintf(&Nout, ex.Numbers[i]);

        }
    }
    return 0;
}