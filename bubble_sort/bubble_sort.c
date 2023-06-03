#include <stdio.h>
#include <string.h>

void sort_list(int *, int);

int main()
{
  int arr[10] = {1, 3, 4, 6, 7, 5, 3, 2, 6, 1};

  sort_list(arr, sizeof(arr) / sizeof(int));

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}

void sort_list(int *list, int size)
{
  int temp;
  int i, j;
  for (i = 1; i < size; i++)
  {
    for (j = 0; j < size - i; j++)
    {
      if (list[j] > list[j + 1])
      {
        temp = list[j + 1];
        list[j + 1] = list[j];
        list[j] = temp;
      }
    }
  }
}
