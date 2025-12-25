#include <stdio.h>

void swapToTheEnd(int[], int);

void printArray(int [],int);

void badWayForInsertionSort(int [], int );

void insertionSort(int [], int);

int main(){

 int myArray[6] = {7, 10, -1, 20, 3,4};

 insertionSort(myArray, 6); 
 
 printArray(myArray,5);


  return 0;
}

void printArray(int arr[], int size){
  int i;

  printf("[ ");

  if(size>0) {
    printf("%d", arr[0]);
    for(i = 1; i<size; ++i){
      printf(", %d", arr[i]);
    }
  }

  printf(" ]\n");
}

/* Good way for insertion sort */
void insertionSort(int arr[], int size){
  if(size<2) return; /* no need to sort empty or one itme array */

  int temp;
  for(int i = 1; i<size; ++i){
    for(int j =i; j>0 && (arr[j] < arr[j-1]);--j){
        temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
    }
  }
}

/* Insertion sort function */
void badWayForInsertionSort(int arr[], int size){

  if(size< 2) return; /* No nedd to sort empty of one item array */

  int temp;
  
  if(arr[0]> arr[1]) { /* Swap them frist */
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
  }

  if(size == 2) return; /* we just sorted the array*/

  /* Now lets sort an array if it's size was > 3 items*/

  int i, j, tempI;
  i = 2;

  while (i < size) {
    j = 0; /* Start from the begening of the array */
    while(j<i) {
      if(arr[j] > arr[i]){
        tempI = i;
        while(tempI > j){
          temp = arr[tempI -1];
          arr[tempI -1] = arr[tempI];
          arr[tempI] = temp;
          --tempI;
        }
      }
      ++j;
    }
    ++i;
  }


}

/* Function that will move the last item in the any array to front 
by kepp switching it with it item before*/
void swapToTheEnd(int arr[], int size){
  if (size < 1) return; /* invalide array size */

  int i, temp;

  i = size -1;


  while(i>0) {
    temp = arr[i -1];
    arr[i - 1] = arr[i];
    arr[i] = temp;
    --i;
  }


}