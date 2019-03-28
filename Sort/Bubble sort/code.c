#include <stdio.h>
int main(){
    int i, A[100], n;
    scanf("%d",&n);
    for(i =0; i<n; i++){
        scanf("%d",&A[i]);
    }
    printf("Before sort: \n");

    for(i =0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n\n");
    bubble(A, n);

    printf("After sort: \n");

    for(i =0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n\n");
    return 0;
}


bubble(int a[], int n){
    int i,j,k;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1;j++){
            if (a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
}
