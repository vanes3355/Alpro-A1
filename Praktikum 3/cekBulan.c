/*Nama File : cekBulan.c*/
/*Deskripsi : menampilkan hasil benar atau salah dari nama-nama hari dari nomor bulan yaitu 1 s.d. 12*/
/*Pembuat   : Vanesya F. W.*/
/*Tgl pembuatan : 30 Mei 2022*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int i;

    //Algoritma
    printf("Masukkan Angka: ");
    scanf("%d", &i);

    if(i>0 && i<=7){
        i[1] = Januari;
        i[2] = Februari;
        i[3] = Maret;
        i[4] = April;
        i[5] = Mei;
        i[6] = Juni;
        i[7] = Juli;
        i[8] = Agustus;
        i[9] = September;
        i[10] = Oktober;
        i[11] = November;
        i[12] = Desember;
    }printf("&d", &i);
}