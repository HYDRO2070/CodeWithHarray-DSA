#include <stdio.h>
void print(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");
}
void merge(int A[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low, b[high + 1];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            b[k] = A[i];
            i++;
        }
        else
        {
            b[k] = A[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        b[k] = A[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = A[j];
        j++;
        k++;
    }
    for (int i = low; i < high + 1; i++)
    {
        A[i] = b[i];
    }
}
void mergesort(int A[], int low, int high)
{   
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
int main()
{
    int A[10] = {9, 6, 3, 1, 5, 8, 2, 7, 0, 4};
    int size = 10;
    print(A, size);
    mergesort(A, 0, size);
    print(A, size);
    return 0;
}