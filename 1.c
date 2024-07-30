// Q1. Write a C Program to reverse the given array.

#include <stdio.h>

int main()
{
    printf("Done by: Jayacharan R\nReg No: 23BDS0065\nSlot: L27+L28\n");
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int NewArray[size];
    for (int i = size - 1, j = 0; i >= 0, j < size; i--, j++)
    {
        NewArray[j] = array[i];
    }

    printf("Reversed list: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", NewArray[i]);
    }
}