#include <stdio.h>

void read(int [], int);
void display(int [], int);
void newarr(int [], int);

int main()
{
    int size;
    printf("enter the size:");
    scanf("%d", &size);
    int arr[size];
    read(arr, size);
    display(arr, size);
    newarr(arr, size);
    return 0;
}

void read(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

/* Simple, minimal-change insertion using a temporary array */
void newarr(int arr[], int n)
{
    int index, data;
    printf("enter the index and element to insert: ");
    scanf("%d%d", &index, &data);

    if (index < 0 || index > n) {
        printf("index out of range (valid 0 to %d)\n", n);
        return;
    }

    int b[n + 1];          /* temporary array with space for new element */

    /* copy elements before index */
    for (int i = 0; i < index; i++)
        b[i] = arr[i];

    /* insert new element */
    b[index] = data;

    /* copy remaining elements, shifted right by one */
    for (int i = index; i < n; i++)
        b[i + 1] = arr[i];

    display(b, n + 1);
}
