/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/26/2019
 * Version 1.0
 *
 * Latex utilities to print character sheet as a pdf (from latex) document. This
 * will be implemented in later versions of the character generator
 */
 
#include "include/header.h"

void create_pdf(char * filename) {
  printf("%s\n", filename);
  //system(strcat("pdflatex", filename));
}

void create_blank_sheet(char * key) {
  char * filename = (char*)malloc(sizeof(char) * 50);
  snprintf(filename, 50, "sheet_%s.tex", key);
  create_pdf(filename);
}
