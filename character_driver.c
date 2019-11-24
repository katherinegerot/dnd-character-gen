/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/23/2019
 *
 * D&D 5e Character Generator
 */

#include "header.h"

int main(int argc, char **argv) {
  int n[6] = {20, 20, 20, 20, 20, 20};
  d_i(n, 6);
  sort_rolls(n, 6);
  print_rolls(n, 6);
  int c, r, g; // int representation of race and class and gender
  char * race = gen_race(&r);
  char * class = gen_class(&c);
  char * gender = gen_gender(&g);
  print_info("Race", race);
  print_info("Class", class);
  print_info("Gender", gender);
  char * name = gen_name(r, g);
  print_info("Name", name);
  return 0;
}
