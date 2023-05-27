#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, n, arr[20]; // give size to the array arr[]


    printf("\n Enter the number of elements: "); // Enter the elements in the list
    scanf("%d", &n);

    for (i = 0; i < n; i++) // sort the array using for loop
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n The array elements are ");
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\t", i, arr[i]);
    }

    return 0;
    getch();
}