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
#include <sys/time.h>
#include <time.h>
#include <string.h>

/**
 * Input Utils
 */
void load_from_file(char * filename, int n, char * line);
int count_file_lines(char * filename);

/**
 * Output Utils
 */
void print_rolls(int * n, int size); //printing rolls
void print_info(char * title, char * info); //printing generic info

/**
 * Roll Utils
 */
int d(int n); //d will roll a d_ and return that roll (using random)
//rolls a collection where n is the dice and i is the length of n
void d_i(int * n, int k);
void sort_rolls(int * rolls, int size); //sorts rolls in descending order

/**
 * Latex Utils
 */
void create_pdf(char * filename); //Creates Pdf from latex file

/**
 * Basic info generators
 */
char * gen_race(int * race);
char * gen_class(int * class);
char * gen_gender(int * gender);
//naming functions
char * gen_name(int race, int gender);
char * _gen_name(int gender, char * race, char * sep);

/**
 * Miscellanious
 */
char * gen_unique_id();
void seed();
