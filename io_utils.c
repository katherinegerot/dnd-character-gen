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

int count_file_lines(char * filename) {
  int n = 0;
  FILE * f = fopen(filename, "r");
  if(f == NULL) {
    printf("CAN'T OPEN FILE %s\n", filename);
    return 0;
  }
  char c;
  while((c = fgetc(f)) != EOF) {
    if (c == '\n') {
      n++;
    }
  }
  fclose(f);
  return n;
}

void load_from_file(char * filename, int n, char * line) {
  FILE * f = fopen(filename, "r");
  char buffer[1000];
  for(int i = 0; i < n; i++) {
    fgets(buffer, 1000, f);
  }
  fgets(line, 1000, f);
  for(int i = 0; i < strlen(line); i++) {
    if(line[i] == '\r' || line[i] == '\n') {
      line[i] = '\0';
      return;
    }
  }
}

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
