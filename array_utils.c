/**
 * Author: Luke Olson
 * Date:   10/05/2020
 *
 * This program will
 */

 #include <stdlib.h>
 #include <stdio.h>
 #include <math.h>
 #include "arrayUtils.h"

int contains (const int *arr, int size, int x)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == x)
    {
      return (0);
      printf("Does contain %d\n", x);
    }
  }
  if (arr[4] != x)
  {
    return(1);
    printf("Does not contain %d\n", x);
  }
}

int containsWithin (const int *arr, int size, int x, int i, int j)
{
  for (int z = i, z < j, z++)
  {
    if (arr[i] == x)
    {
      return (0);
      printf("Does contain %d\n", x);
    }
  }
  if (arr[4] != x)
  {
    return(1);
    printf("Does not contain %d\n", x);
  }
  }
}

int * paddedCopy (const int *arr, int oldSize, int newSize)
{

}

int main(int argc, char const *argv[])
{
  int myArray1[5] = {5,4,3,2,1};

  int contains(myArray1, 5, 2)l;
  return 0;
}
