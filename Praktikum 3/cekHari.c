/*Nama File : cekHari.c*/
/*Deskripsi : menampilkan hasil benar atau salah dari nama-nama hari dari nomor hari yaitu 1 s.d. 7*/
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
        i[1] = Senin;
        i[2] = Selasa;
        i[3] = Rabu;
        i[4] = Kamis;
        i[5] = Jumat;
        i[6] = Sabtu;
        i[7] = Minggu;
    }printf("&d", &i);
}