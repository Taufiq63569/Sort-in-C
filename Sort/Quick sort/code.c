#include <stdio.h>
int main(){
    int i, a[100], n;
    printf("Size of array: ");
    scanf ("%d", &n);
    printf("\nTake input:  ");
    for (i=0 ; i<n ; i++){
        scanf ("%d", &a[i]);
    }
    printf("\nBefore sort:  \n");
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    quick_sort( a, 0, n-1);
     printf("\n\nAfter sort:  \n");
    for (i=0 ; i<n ; i++){
        printf ("%d ", a[i]);
    }
    printf ("\n\n");
    return 0;
}

void quick_sort(int a[], int low , int high){
    if (low>=high)
        return;

    int p;
    p= partition(a, low, high);

    quick_sort(a, low, p-1);
    quick_sort(a, p+1, high);
}

int partition(int a[] , int low , int high ){
     int pivpot, i,j,k;
     pivpot= a[high];
     for (i=low-1, j=low; j<high; j++){
        if (a[j]< pivpot){
            i+=1;
            k=a[j];
            a[j]=a[i];
            a[i]=k;
        }
     }
     k=a[high];
     a[high]=a[i+1];
     a[i+1]=k;

     return i+1;
}
