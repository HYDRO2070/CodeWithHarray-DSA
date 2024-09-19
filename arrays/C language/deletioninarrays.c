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
void deletion(int arr[], int size, int index)
{
    for (int i = index; i <size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[10] = {2, 5, 7, 87, 3, 1, 54};
    int size = 7, index = 1;
    display(arr, size);
    deletion(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}