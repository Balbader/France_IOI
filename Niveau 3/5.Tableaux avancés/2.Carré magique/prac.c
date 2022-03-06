#include <stdio.h>

typedef int t_bool;
#define TRUE 1
#define FALSE 0

int main(void) {
  int arr[3][3] = {{6, 1, 8}, {7, 5, 3}, {2, 1, 4}};

  int nbr = 3 * 3;
  int temp[nbr];
  int count;
  int i;
  int j;
  int k;

  k = 0;
  i = 0;
  while (i < 3) {
    j = 0;
    while (j < 3) {
      temp[k] = arr[i][j];
      k++;
      j++;
    }
    i++;
  }

  i = 0;
  while (i < nbr) {
    printf("%d ", temp[i]);
    i++;
  }
  printf("\n");

  count = sizeof(temp) / sizeof(temp[0]);
  i = 0;
  while (i < count) {
    j = i + 1;
    while (j < count) {
      if (temp[i] == temp[j]) {
        printf("temp[i]: %d\n", temp[i]);
        printf("temp[j]: %d\n", temp[j]);
        printf("duplicate\n");
      }
      j++;
    }
    i++;
  }
  return (0);
}
