/*Nama File : insertionSort.c*/
/*Deskripsi : mengumpulkan sekumpulan data dengan membandingkan semua data mulai dari data ke-2 dengan data ke-1 dan mulai dari datanya terus bertambah sampai berapa jumlah sekumpulan data dan dibandingkan datanya sampai data ke-1*/
/*Pembuat   : Vanesya F. W.*/
/*Tgl pembuatan : 9 Mei 2022*/
#include <stdio.h>

void insertionSort(int array[], int n)
{
//kamus lokal
    int i, temp, j;

//algoritma
    for (i = 1; i < n; i++) {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
}

int main()
{
//kamus
    int i, n, array[] = {30,8,19,40,6,4,5,7,37,35};

//algoritma
    n = sizeof(array) / sizeof(array[0]);
    insertionSort(array, n);
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}