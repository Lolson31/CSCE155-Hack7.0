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
    printf ("Returned 1 (true)\n");
  }
}

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
    return(0);
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

//Test contains
  printf("Testing contains Function: \n");
  testFunc (contains(myArray1, 5, 2));    //true
  testFunc (contains(myArray1, 5, 0));    //false
  testFunc (contains(myArray2, 10, 5));   //true
  testFunc (contains(myArray2, 10, 11));  //false

//Test containsWithin
  printf ("Testing containsWithin Function: \n");
  testFunc (containsWithin(myArray1, 5, 3, 0, 5));  //true
  testFunc (containsWithin(myArray1, 5, 2, 1, 3));  //
  testFunc (containsWithin(myArray1, 5, 5, 1, 3));  //
  testFunc (containsWithin(myArray1, 5, 1, 3, 5));  //

  return 0;
}
//hi
