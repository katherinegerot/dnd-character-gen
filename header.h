/**
 * Author: Katherine Gerot
 * Creation Date: 11/23/2019
 * Last Edited: 11/23/2019
 *
 * Master header file
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

/**
 * Output Utils
 */
//printing rolls
void print_rolls(int * n, int size);

/**
 * Roll Utils
 */
//d will roll a d_ and return that roll (using random)
int d(int n);
//rolls a collection where n is the dice and i is the length of n
void d_i(int * n, int k);
//sorts rolls in descending order
void sort_rolls(int * rolls, int size);

/**
 * Latex Utils
 */
 //Creates Pdf from latex file
 void create_pdf(char * filename);
