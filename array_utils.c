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

void testCheckFunc (int func)
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

void testEditFunc(int *func, int newArraySize)
{
  printf("New array: [");
  for (int i = 0; i < newArraySize; i++)
  {
    printf ("%d ", func[i]);
  }
  printf("]\n");
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

int main(int argc, char const *argv[])
{
  int myArray1[5] = {5,4,3,2,1};
  int myArray2[10] = {10,9,8,7,6,5,4,3,2,1};

//Test contains
  printf("Testing contains Function: \n");
  testCheckFunc (contains(myArray1, 5, 2));    //true
  testCheckFunc (contains(myArray1, 5, 0));    //false
  testCheckFunc (contains(myArray2, 10, 5));   //true
  testCheckFunc (contains(myArray2, 10, 11));  //false

//Test containsWithin
  printf ("Testing containsWithin Function: \n");
  testCheckFunc (containsWithin(myArray1, 5, 3, 0, 4));  //true
  testCheckFunc (containsWithin(myArray1, 5, 2, 1, 3));  //true
  testCheckFunc (containsWithin(myArray1, 5, 5, 1, 3));  //false
  testCheckFunc (containsWithin(myArray1, 5, 5, 3, 4));  //false

//Test paddedCopy
  printf("Testing paddedCopy Function: \n");
  testEditFunc (paddedCopy(myArray1, 5, 10), 10); //[5,4,3,2,1,0,0,0,0,0]
  testEditFunc (paddedCopy(myArray1, 5, 3), 3);   //[5,4,3]

//Test reverse
  printf("Testing reverse Function: \n");
  reverse(myArray1, 5);
  printf("[");
  for (int i = 0; i < 5; i++)
  {
  printf("%d ", myArray1[i]);
  }
  printf("]\n");
  reverse(myArray1, 5);
  printf("[");
  for (int i = 0; i < 5; i++)
  {
  printf("%d ", myArray1[i]);
  }
  printf("]\n");

//test reverseCopy
  printf("Testing reverseCopy: \n")
  testEditFunc (reverseCopy(myArray1, 5), 5);
  testEditFunc (reverseCopy(myArray2, 10), 10);

  return 0;
}
//hii
