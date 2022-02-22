#include <stdio.h>

typedef int t_bool;
#define TRUE 1
#define FALSE 0

char scan_arr(char arr[8][8]);
t_bool check_moves(int x, int y, char arr[8][8]);

int main(void) {
  char arr[8][8];
  int check;
  int i;
  int j;

  scan_arr(arr);
  check = 0;
  i = 0;
  while (i < 8) {
    j = 0;
    while (j < 8) {
      if (arr[i][j] == 'C') {
        check = check_moves(i, j, arr);
        if (check == 1) {
          printf("yes\n");
          return (0);
        }
      }
      j++;
    }
    i++;
  }
  printf("no\n");
  return (0);
}

char scan_arr(char arr[8][8]) {
  int i;
  int j;

  i = 0;
  while (i < 8) {
    j = 0;
    while (j < 8) {
      scanf("%c", &arr[i][j]);
      j++;
    }
    scanf("\n");
    i++;
  }
  return (**arr);
}

t_bool check_moves(int x, int y, char arr[8][8]) {
  int x_move[8] = {2, 1, -1, -2, -2, -1, 1, 2};
  int y_move[8] = {1, 2, 2, 1, -1, -2, -2, -1};
  int i;
  int j;

  j = 0;
  i = 0;
  while (i < 8 && j < 8) {
    /* S'assurer que le cavalier ne sort pas de l'echiquier */
    if ((0 <= x + x_move[i] && x + x_move[i] < 8) &&
        (0 <= y + y_move[j] && y + y_move[j] < 8)) {
      /* dans le cas ou le cavalier bouffe un pion adverse */
      if (arr[x + x_move[i]][y + y_move[j]] >= 'a' &&
          arr[x + x_move[i]][y + y_move[j]] <= 'z') {
        return (TRUE);
      }
    }
    j++;
    i++;
  }
  return (FALSE);
}

/*
#include <ctype.h>
#include <stdio.h>

char plateau[8][9];
int delta[8][2] = {{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2}};
int dansPlateau(int lin, int col)
{
 return ((lin >= 0) && (lin < 8) && (col >= 0) && (col < 8));
}
int peutAttaquer()
{
 int lin, col, direction;
 for(lin = 0 ; lin < 8 ; lin++)
    for(col = 0 ; col < 8 ; col++)
       if (plateau[lin][col] == 'C')
          for(direction = 0; direction < 8 ; direction++)
         {
             int linDest = lin + delta[direction][0];
             int colDest = col + delta[direction][1];
             if(dansPlateau(linDest, colDest) &&
islower(plateau[linDest][colDest])) return 1;
          }
 return 0;
}
int main()
{
 int lin;
 for(lin = 0 ; lin < 8 ; lin++)
    scanf("%s", plateau[lin]);
 if (peutAttaquer())
    printf("yes\n");
 else
    printf("no\n");
 return 0;
}
*/
