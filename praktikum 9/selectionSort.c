/*Nama File : selectionSort.c*/
/*Deskripsi : mengurutkan sekumpulan data dengan membandingkan semua data lalu setelah nilainya ditemukan barulah dilakukan ppertukaran nilai, nilai yang sudah ditetapkan tidak adakan dibandingkan lagi*/
/*Pembuat   : Vanesya F. W.*/
/*Tgl pembuatan : 9 Mei 2022*/
#include <stdio.h>

void selectionSort(int array[], int n)
{
//kamus lokal
    int i, j, min, temp;

//algoritma
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++){
            if (array[j] < array[min]){
                min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main()
{
//kamus
    int i, n, array[] = {30,8,19,40,6,4,5,7,37,35};

//algoritma
    n = sizeof(array)/sizeof(array[0]);
    selectionSort(array, n);
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}