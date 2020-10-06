
//Test functions commented out
/**
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
*/

//Tests commented out
/**
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
  printf("Testing reverseCopy: \n");
  testEditFunc (reverseCopy(myArray1, 5), 5);
  testEditFunc (reverseCopy(myArray2, 10), 10);

  return 0;
}
*/
