/**
 * Author: Katherine Gerot
 * Creation Date: 11/22/2019
 * Last Edited: 11/23/2019
 * Version 1.0
 *
 * Functions controlling rolls
 * V1.0: Basic function outlines
 */

#include "roll_utils.h"

int d(int n) {
  return (rand() % 20) + 1;
}

void d_i(int * n, int k) {
  srand(time(NULL));
  for(int i = 0; i < k; i++) {
    *(n + i) = d(*(n+i));
  }
}

void sort_rolls(int * rolls, int size){
  for(int i = 0; i < size - 1; i++) {
    int min = i;
    for(int j = i + 1; j < size; j++) {
      if(rolls[j] < rolls[min]){
        min = j;
      }
      int temp = rolls[min];
      rolls[min] = rolls[j];
      rolls[j] = temp;
    }
  }
}
