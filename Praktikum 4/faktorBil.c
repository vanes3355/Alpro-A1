/*Nama File : faktorBil.c*/
/*Deskripsi : Menentukan faktor bilangan dari bilangan integer*/
/*Pembuat   : Vanesya F. W.*/
/*Tgl pembuatan : 30 Mei 2022*/

#include <stdio.h>

int main(){
    int angka, i;

    printf("Faktor dari Bilangan\n");
    printf("--------------------\n");

    printf("Masukkan bilangan bulat positif : ");
    scanf("%d", &angka);

    printf("Faktor dari bilangan %d yaitu", angka);
    for(i=1; i <= angka; i++){
        //sisa bagi = 0 maka termasuk faktor
        if (angka % i == 0){
            printf(" %d", i);
        }
    }
    printf("\n\n\n");

    return 0;
}