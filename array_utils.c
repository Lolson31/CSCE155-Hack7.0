/**
 * Author: Luke Olson
 * Date:   10/05/2020
 *
 * This program will provide a range of utlities for checking and editing arrayUtils
 *
 */

 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include "array_utils.h"

//required functions
int contains (const int *arr, int size, int x)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == x)
    {
      return (1);
    }
  }
  if (arr[size - 1] != x)
  {
    return(0);
  }
}

int containsWithin (const int *arr, int size, int x, int i, int j)
{
  for (i; i <= j; i++)
  {
    if (arr[i] == x)
    {
      return (1);
    }
  }
  if (arr[j] != x)
  {
    return(1);
  }
}

int * paddedCopy (const int *arr, int oldSize, int newSize)
{
  int *newArray = (int*) malloc(newSize * sizeof(int));

  for (int i = 0; i < newSize; i++)
  {
    if (i <= oldSize - 1)
    {
      newArray[i] = arr[i];
    }
    else
    {
      newArray[i] = 0;
    }
  }
  return (newArray);
}

void reverse (int *arr, int size)
{
  int temp;

  for (int i = 0; i < (size) / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
}

  int * reverseCopy (const int *arr, int size)
  {
    int *newArray = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
      newArray[i] = arr[size - i - 1];
    }
    return(newArray);
  }
