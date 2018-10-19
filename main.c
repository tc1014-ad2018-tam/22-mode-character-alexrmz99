/*  This program will find the mode character of any given string by the user.
 *
 *
 *  Alejandro Ramírez Michel
 *  18 de octubre de 2018
 *
 * */

#include <stdio.h>
#include <string.h>

int main() {
    //primero defino varibles
    char string [100];
    int repe = 0;
    int contador = 0;
    int mode = string[0];

    //aqui le pido al usuario el string
    printf("Write anything you want: ");
    fgets(string, sizeof(string), stdin);

    printf("\n");
    printf("You wrote: %s", string);

    //establezco condiciones para empezar a contar
    for (int i = 0; i < strlen(string); i++) {                      //mientras el string sea mayor a 0
        for (int j = i + 1; j < strlen(string); j++) {              //j es "i" de arriba + 1
            if (string[i] == string[j] && string[i] != ' ') {       //si el string [i] es igual a string [j] y son dif. a espacio
                repe++;                                             //sumar en "repe"
            }
        }

        if (repe > contador) {                                      //si "repe" es mayor a contador (que es 0)
            contador = repe;                                        //contador se convierte en la letra repetida
            mode = string[i];                                       //mode se convierte en el string repetido en [i]
        }
    }

    //imprimo la moda en el string
    printf("The mode in the text given is %c.", mode);
    return 0;
}