#include <stdio.h>
#include <stdlib.h>

int main ()
{
/*Kamus*/
    const float phi = 3.14; //Konstansta
    int r; //variabel jari-jari
    float l; //variabel luas

/*Algoritma*/
    scanf("%d", &r);
    //phi*r^2
    l = phi*(r*r);

    printf("Luas Lingkaran = %.2f", l);

    return 0;
}
