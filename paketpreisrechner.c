#include <stdio.h>

int main() {
    float paketgewicht;
    float preis;
    printf("Geben Sie das Gewicht ihres Paketes in kg an: \n");
    scanf("%f", &paketgewicht);

    if (paketgewicht >= 0 && paketgewicht <= 2) {
        preis = 5.49;
    }
    else if (paketgewicht > 2 && paketgewicht <= 5) {
        preis = 6.99;
    }
    else if (paketgewicht > 5 && paketgewicht <= 10) {
        preis = 10.49;
    }
    else if (paketgewicht > 10 && paketgewicht <= 31.5) {
        preis = 19.99;
    }
    else if (paketgewicht > 31.5) {
        preis = 50.99;
    }
    else {
        printf("ungueltige Gewichteingabe\n");
        return 1;
    }

    printf("Der Preis für das Paket beträgt: %.2f EUR\n", preis);

    return 0;
}
