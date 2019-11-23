/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/23/2019
 *
 * D&D 5e Character Generator
 */

#include <stdlib.h>
#include <stdio.h>

#include "header.h"

int main(int argc, char **argv) {
  int n[6] = {20, 20, 20, 20, 20, 20};
  d_i(n, 6);
  print_rolls(n, 6);
  sort_rolls(n, 6);
  print_rolls(n, 6);
  return 0;
}
