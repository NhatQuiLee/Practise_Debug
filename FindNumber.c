#include <stdio.h>

void EnterArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Array[%i] = ", i);
        scanf("%d", &array[i]);
    }
}

void DisplayArray(int array[], int size)
{
    printf("\nArray = [ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("]");
}

int FindPositionOfNumberInArray(int array[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    return -1;
}

int main()
{
    int size;
    int array[20];
    printf("Enter size of array: ");
    scanf("%d", &size);
    EnterArray(array, size);
    DisplayArray(array, size);

    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int position = FindPositionOfNumberInArray(array, size, number);

    if (position == -1)
    {
        printf("Number %d is not found in the array", number);
    }
    else 
    {
        printf("Number %d is found at position %d", number, position);
    }

    return 0;
}