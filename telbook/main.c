#include <stdio.h>

int main() {
    FILE *Fout = fopen("FNames.txt", "r+");
    FILE *Lout = fopen("LNames.txt", "r+");
    FILE *Nout = fopen("Numbers.txt", "r+");
    struct HashTB{
        char FNames[20] = "FNames.txt";
        char LNames[20] = "LNames.txt";
        char Numbers[20] = "Numbers.txt";
    } D, N, O, R;
    printf("0 - exit\n 1 - add new contact\n 2 - print all contacts\n 3 - find contact by name\n 4 - find contact by number\n 5 - save and exit");
    int a =
    scanf("%d", &a);
    if(a == 0){
        int fclose(FILE *Fout);
        int fclose(FILE *Lout);
        int fclose(FILE *Nout);
    }
    else if (a == 1){
        printf("New contact first name:");
        int v = 3;
        v++;
        char Fnames[v];
        Fnames[v] = scanf("%c", &Fnames[v]);


        printf("New contact last name:");
        int g = 3;
        g++;
        char Lnames[g];
        Lnames[g] = scanf("%c", &Lnames[v]);

        printf("New phone number first name:");
        int s = 3;
        s++;
        char Numbers[v];
        Numbers[s] = scanf("%c", &Numbers[s]);
    }
    else if(a == 2){

        for(int i = 0;i <= 20; i++){
            printf("%c", FNames[i], LNames[i]);
        }
    }
    else if(a == 3){
        printf("Contact Name:");
        char NF = scanf("%c", &NF);

        printf("Contact Surname:");
        char SF = scanf("%c", &SF);
        for(int i = 0;i <= 20; i++){
            if(NF == FNames[i] || SF == LNames[i]){
                return FNames[i], LNames[i], Numbers[1];
            }
        }
    }
    return 0;
}