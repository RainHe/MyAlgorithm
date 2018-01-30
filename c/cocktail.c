#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void cocktail_sort(int *array, int length) {

  int left = 0;
  int right = length - 1;
  int tmp = 0;
  while(left < right) {
    int i = 0;
    for(i = left; i < right; i++) {
      if (array[i] > array[i + 1]) {
        tmp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = tmp;
      }
    }
    right--;

    for (i = right; i > left; i--) {

      if (array[i] < array[i - 1]) {

        tmp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = tmp;
      }
    }
    left++;
    
  }
  
}

int main(void) {

  int array[] = {6,5,3,1,6,7,3,576};

  int length = sizeof(array) / sizeof(int);

  cocktail_sort(array,length);
  int i = 0;
  for(i = 0; i < length; i++)
    printf("%d\n",array[i]);
}
