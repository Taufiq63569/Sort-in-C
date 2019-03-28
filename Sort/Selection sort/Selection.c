#include<stdio.h>
int main ()
{
    int a[100], n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    sel(a, n);
     for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}

void sel(int a[], int n){

    int i,j,k;
    for(i=0;i<n-1;i++){
        int min = i;
        for(j=i+1; j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            k=a[i];
            a[i]=a[min];
            a[min]=k;

        }
    }
}
