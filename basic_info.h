/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/16/2019
 * Version 1.0
 *
 * Header file for basic character information
 * V1.0: Basic races and their profiles
 */

// Enumerators for easier identification
enum Basic_Race {
  Dragon_Born, //db
  Dwarf, // dw
  Elf, // el
  Gnome, // gn
  Half_Elf, //he
  Halfling, //hf
  Half_Orc, //ho
  Tiefling //tf
};
enum Gender {Male,Female,Agender,Non-binary,Bigender,Unknown};
enum Language {
  Common,
  Draconic
};

// Holds ability scores and modifiers
struct Ability_Scores{
  // first value is score, second is mod
  int strength[2];
  int dexterity[2];
  int consitution[2];
  int intelligence[2];
  int wisdom[2];
  int charisma[2];
};

// Specific weapon and attack ability breakdown
struct Weapon {
  char* damage_type;
  char save;
  int throw_max;
  double distance; //in feet
  char* direction;
  char* cooldown;
  char* damage;
};

// Race-specific alterations
struct Race_Profile {
  Basic_Race race;
  char** names;
  char** types;
  int ability_modifiers;
  int age_range[2];
  double alignment_weight[6];
  int height_avg;
  int weight_avg;
  int speed;
  Weapon* ancestry;
  char** resistances;
};

// Character profile
struct Character {
  Basic_Race race;
  Gender gender;
  char* name;
  char* type;
  Ability abilities;
  Weapon* weapons;
};
