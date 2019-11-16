/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/16/2019
 * Version 1.0
 *
 * Latex utilities to print character sheet as a pdf (from latex) document. This
 * will be implemented in later versions of the character generator
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "latex_utils.h"

void create_pdf(char * filename) {
  system(strcat("pdflatex", filename));
}
