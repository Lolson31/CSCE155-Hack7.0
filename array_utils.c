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

void testFunc (int func)
{
  if (func == 0)
  {
    printf("Returned 0 (false)\n");
  }
  else
  {
    printf ("Returned 1 (true)");
  }
}

int contains (const int *arr, int size, int x)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == x)
    {
      return (0);
    }
  }
  if (arr[size] != x)
  {
    return(1);
  }
}

int containsWithin (const int *arr, int size, int x, int i, int j)
{
  for (i, i < j, i++)
  {
    if (arr[i] == x)
    {
      return (0);
    }
  }
  if (arr[size] != x)
  {
    return(1);
  }
  }
}
/**
int * paddedCopy (const int *arr, int oldSize, int newSize)
{

}
*/
int main(int argc, char const *argv[])
{
  int myArray1[5] = {5,4,3,2,1};
  int myArray2[10] = {10,9,8,7,6,5,4,3,2,1};

  testFunc (contains(myArray1, 5, 2));
  testFunc (contains(myArray1, 5, 0));
  testFunc (contains(myArray2, 10, 5));
//test contains function

  return 0;
}
