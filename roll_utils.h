/**
 * Author: Katherine Gerot
 * Creation Date: 11/22/2019
 * Last Edited: 11/23/2019
 * Version 1.1
 *
 * Header file for functions controlling rolls
 * V1.0: Basic function outlines
 * V1.1: Correcting random and adding collective rolls
 */

 #include <time.h>
 #include <stdlib.h>
 #include <stdio.h>

/**
 * d will roll a d_ and return that roll (using random)
 */
int d(int n);

/**
 * rolls a collection where n is the dice and i is the length of n
 */
void d_i(int * n, int k);

/**
 * sorts rolls in descending order
 */
void sort_rolls(int * rolls, int size);
