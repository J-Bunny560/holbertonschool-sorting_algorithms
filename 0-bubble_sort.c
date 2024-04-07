#include "sort.h"
/* Bubble sort function */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}

/* Printing helper functions */
void print_array(const int *array, size_t size)
{
size_t i;

for (i = 0; i < size; i++)
{
printf("%d", array[i]);
if (i < size - 1)
printf(", ");
}
printf("\n");
}
