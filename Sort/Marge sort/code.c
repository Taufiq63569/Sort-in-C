#include <stdio.h>
int main ()
{
    int i,a[100], n;
    printf("Size of array:  ");
    scanf("%d",&n);
    printf("\nTake input:  ");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore sort:  \n");
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    marge_sort(a,0, n-1);
    printf("\n\nAfter sort:  \n");
    for (i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n\n");
}

void marge_sort(int a[], int left, int right)
{
    if(left>=right)
    {
        return;
    }
    int mid = left+(right-left)/2;
    marge_sort(a, left,mid);
    marge_sort(a, mid+1, right);

    marge(a, left, mid, right);
}
void marge(int a[], int left, int mid, int right)
{

    int l, sl, sr, j=0,k=left,i=0;
    sl= mid-left+1;
    sr= right-mid;
    int L[sl];
    int R[sr];
    for(l=0; l<sl; l++)
    {
        L[l]=a[left +l];
    }

    for(l=0; l<sr; l++)
    {
        R[l]=a[mid+1+l];
    }
    while(i<sl && j<sr)
    {
        if (L[i]<R[j])
        {
            a[k++]=L[i++];
        }
        else
        {
            a[k++]=R[j++];
        }
    }

    while(i<sl)
    {
        a[k++]=L[i++];
    }

    while (j<sr)
    {
        a[k++]=R[j++];
    }
}
