/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/16/2019
 * Version 1.0
 *
 * Header file for basic character information
 * V1.0: Basic Races
 */

 enum race_basic {
   Dragon_Born, //db
   Dwarf, // dw
   Elf, // el
   Gnome, // gn
   Half_Elf, //he
   Halfling, //hf
   Half_Orc, //ho
   Tiefling //tf
 } Basic_Race;


 struct race_profile {
   Basic_Race race;
   char* name;
   char* type;
   int ability_modifiers;
   int age_range[2];
   double alignment_weight[6];
   int height_avg;
   int weight_avg;
   int speed;
 } Race_Profile;
