

#include <stdio.h>


float addi(float pa, float pb) {

    // Variablen deklarieren und initialiseren
    float result = 0;

    // Verarbeitung
    result = pa + pb;

    return result;
}

float subt(float pa, float pb) {

    // Variablen deklarieren und initialiseren
    float result = 0;

    // Verarbeitung
    result = pa - pb;

    return result;
}

float mult(float pa, float pb) {

    // Variablen deklarieren und initialiseren
    float result = 0;

    // Verarbeitung
    result = pa * pb;

    return result;
}

float divi(float pa, float pb) {

    // Variablen deklarieren und initialiseren
    float result = 0;

    // Verarbeitung
    if(pb != 0) {
        result = pa / pb;
    }
    else {
        printf("\n\nFehler! Division durch 0\n");
    }
    

    return result;
}

int main() {

    // Variablen deklarieren und initialisieren
    float a = 0;
    float b = 0;
    float c = 0;
    char eingabe = ' ';


    // Eingabe
    printf("Devins Rechner\n\n");
    printf("Gebe einen Operanten ein (z.B. +):");
    scanf("%c", &eingabe);
    printf("Gebe die erste Zahl ein:");
    scanf("%f", &a);
    printf("Gebe die zweite Zahl ein:");
    scanf("%f", &b);

    // Verarbeitung
    switch(eingabe) {
        case '+':
            c = addi(a,b);
            break;
        case '-':
            c = subt(a,b);
            break;
        case '*':
            c = mult(a,b);
            break;
        case '/':
            c = divi(a,b);
            break;
        default:
            printf("\n\nFehler bei der Eingabe!");
            break;
    }


    // Ausgabe
    printf("Das Ergebnis der Operation %c lautet: %.2f", eingabe, c);

    return 0;
}