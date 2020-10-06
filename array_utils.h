/**
 * Author: Luke Olson
 * Date:   10/05/2020
 *
 * This program will
 */

int contains (const int *arr, int size, int x);  //Determines if an array contains int x

int containsWithin (const int *arr, int size, int x, int i, int j); //Determines if array contains x within the range i - j

int * paddedCopy (const int *arr, int oldSize, int newSize); //Creates a copy of an array with the size NewSize

int  * reverse (int *arr, int size); //Reverses array order

int * reverseCopy (const int *arr, int size); //Makes copy of array with elements in reverse order

void testCheckFunc (int func);  //Tests if a function that checks an array returns 1 (true) or 0 (false)

void testEditFunc (int *func, int newArraySize); //Returns the result of a function that edits an array
