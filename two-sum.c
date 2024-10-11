#include <stdio.h>
#include <stdlib.h>

int *two_sum(int *array, int size, int target) {
  int *ptr = (int *) malloc(2 * (sizeof(int)));

  for (int i = 0; i < size; ++i) {
    for (int j = i + 1; j < size; ++j) {

      int result = array[i] + array[j];

      if (result == target) {
        ptr[0] = i;
        ptr[1] = j;

        return ptr;
      }
    }
  }
}


int main(void) {
  int array[] = { 1, 3, 4, 0 };

  int *two_sum_result = two_sum(array, sizeof(array)/sizeof(int), 5);

  printf("Two sum result - first index: %d, second index: %d\n", *two_sum_result, *(two_sum_result + 1));
  return 0;  
}
