#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, x;                      //16 bitów
    char c;                         //kod ASCII

    printf("Wpisz pierwsza liczbe: \n");
    scanf("%d", &a);

    printf("Wpisz druga liczbe: \n");
    scanf("%d", &b);                //%d przy liczbie
    getchar();                      // Nowa linia po wczytaniu liczby b

    printf("Jaka operacje chcesz wykonac (podaj znak): \n");
    scanf("%c", &c);                //%c przy znaku ASCII
   

    switch (c) {
        case '+':
            x = a + b;
        printf("Wynik dodawania to: %d\n", x);
            break;

        case '-':
            x = a - b;
        printf("Wynik odejmowania to: %d\n", x);
            break;

        case '*':
            x = a * b;
        printf("Wynik mnozenia to: %d\n", x);
            break;

        case '/':
            if (b == 0) {
            printf("Nie mozna dzielic przez zero\n");
            } else {
                x = a / b;
                printf("Wynik dzielenia: %d\n", x);
            }
            

        default:
            printf("Nieznana operacja\n"); 
    }

    return 0;
}

//trzeba klikać robaka i runner: debug file, ostatni
