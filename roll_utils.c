/**
 * Author: Katherine Gerot
 * Creation Date: 11/22/2019
 * Last Edited: 11/22/2019
 * Version 1.0
 *
 * Functions controlling rolls
 * V1.0: Basic function outlines
 */
 #include "roll_utils.h"

int d(int n) {
  srand(time(0));
  return (rand() % 20) + 1;
}

void sort_rolls(int * rolls, int size){
  for(int i = 1; i < size; i++) {
    int n = *(rolls+i);
    int j = i - 1;
    while(j >= 0 && *(rolls+i) > n) {
      rolls[j + 1] = *(rolls + j);
      j--;
    }
    *(rolls + (j + 1)) = n;
  }
}
