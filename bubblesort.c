#include<stdio.h>
void bubblesort(int*A,int n)
{
    int temp;
    for(int i=0; i<n-1;i++)
    {
        for(int j =0; j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    return;
}

printarray(int *A,int n)
{
    for(int k=0; k<n;k++)
    {
        pirntf("%d",A[k]);   
    }
    bubblesort(A,n);
    printf("the sorted array is %d",&A);
}
int main()
{
    int A[] = {45,67,12,32,10},n;
    n=5;
    printarray(A,n);
}