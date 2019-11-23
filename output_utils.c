/**
 * Author: Katherine Gerot
 * Creation Date: 11/23/2019
 * Last Edited: 11/23/2019
 * Version 1.0
 *
 * Functions controlling output
 * V1.0: Basic function outlines
 */

#include "header.h"

void print_rolls(int * n, int size){
  printf("---------ROLLS---------\n");
  for(int i = 0; i < size; i++) {
    printf("%d\t", *(n + i));
  }
  printf("\n");
}

void print_info(char * title, char * info) {
  printf("%s:\t%s\n", title, info);
}
