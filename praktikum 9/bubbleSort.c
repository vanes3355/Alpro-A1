/*Nama File : bubbleSort.c*/
/*Deskripsi : mengurutkan dengan membandingkan dua data yang berdekatan dan menukarnya sampai dalam urutan yang diinginkan*/
/*Pembuat   : Vanesya F. W.*/
/*Tgl pembuatan : 9 Mei 2022*/
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i, n, *arr;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}