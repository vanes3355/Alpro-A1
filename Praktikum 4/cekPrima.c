/*Nama File : cekPrima.c*/
/*Deskripsi : Mengetahui bilangan integer sembarang termasuk bilangan prima atau bukan*/
/*Pembuat   : Vanesya F. W.*/
/*Tgl pembuatan : 30 Mei 2022*/

#include <stdio.h>

int main(void)
{
    int n, i, angka_prima;
    angka_prima = 1;

    printf("Input satu angka bulatl: ");
    scanf("%i", &n);

    if (n == 0 || n == 1) {
        angka_prima = 0
    } else {
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0){
                angka_prima = 0;
            }
        }
    }
    printf("\n");
    if(angka_prima == 1)
        printf("%i adalah angka prima\n",n);
    else
        printf("%i bukan angka prima\n,n");
    
    return 0;
}