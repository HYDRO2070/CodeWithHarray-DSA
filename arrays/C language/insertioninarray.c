#include <stdio.h>

void display(int arr[], int size)
{
    // traversing in array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insertion(int arr[], int size, int index, int value, int total_size)
{
    if (size >= total_size)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
}

int main()
{
    int arr[10] = {2, 5, 7, 87, 3, 1, 54};
    int size = 7, index = 1, value = 23;
    display(arr, size);
    insertion(arr, size, index, value, 100);
    size += 1;
    display(arr, size);

    return 0;
}