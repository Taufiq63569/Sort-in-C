#include <stdio.h>
int main()
{
    int i, A[100], n;
    scanf("%d",&n);
    for(i =0; i<n; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Before sort: \n");

    for(i =0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n\n");
    insertion(A, n);

    printf("After sort: \n");

    for(i =0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n\n");
    return 0;
}


void insertion(int a[], int n)
{

    int i, j, k;
    for (i=1; i<n ; i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0&& a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }

        a[j+1]=k;
    }
}
