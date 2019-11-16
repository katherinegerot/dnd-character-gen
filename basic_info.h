/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/16/2019
 * Version 1.0
 *
 * Header file for basic character information
 * V1.0: Basic races and their profiles
 */

// Profile Initializers
Race_Profile race_profile_init(PHB_Race race_profile);
Class_Profile class_profile_init(PHB_Class class_profile);

// Ability scores and Skills
Ability_Scores gen_abilities(Class_Profile class);
Skills gen_skills(Ability_Scores abilities);


// Enumerators for easier identification
enum PHB_Race {Dragon_Born,Dwarf,Elf,Gnome,Half_Elf,Halfling,Half_Orc,
               Human,Tiefling};
enum PHB_Class {Barbarian,Bard,Cleric,Druid,Fighter,Monk,Paladin,Ranger,
                Rogue,Sorcerer,Warlock,Wizard};
enum Gender {Male,Female,Agender,Non-binary,Bigender,Unknown};
enum Language {Common,Draconic};
enum Equipment_Type {Light_Armour,Medium_Armour,Heavy_Armour,Shield,Tool};
Weapon_Type {Simple,Martial};
enum Damage_Type {Acid,Lightning,Fire,Poison,Cold};

// Race-specific alterations
struct Race_Profile {
  PHB_Race race;
  char** names, types, resistances;
  int ability_modifiers[6],age_range[2];
  double alignment_weight[6];
  int height_avg,weight_avg,speed;
  Weapon* ancestry;
};

struct Class_Profile {
  char** features;
  int hit_points,hit_dice;
  double* ability_weights,armour_proficiencies,weapon_proficiences;
};

// Holds ability scores and modifiers
struct Ability_Scores{
   int strength[2],dexterity[2],consitution[2],intelligence[2],wisdom[2],
       charisma[2];
};

// Skill structure
struct Skills {
  int acrobatics,animal_handling,arcana,athletics,deception,history,history,
      insight,imidation,investigation,medicine,nature,perception,performance,
      persuasion,religion,slight_of_hand,stealth,survival;
};

// Specific weapon and attack ability breakdown
struct Weapon {
  Weapon_Type weapon_type;
  Damage_Type damage_type;
  char save;
  int throw_max;
  double distance; //in feet
  char* direction,cooldown,damage;
};

// Player's money
struct Purse {
  int ep,pp,gp,sp,cp;
};

struct Equipment {
  Equipment_Type type;
  char* name, decription;
  int cost,weight;
  int* likely_classes;
};

// Character profile
struct Character {
  PHB_Race race;
  PHB_Class class;
  int level;
  Gender gender;
  char* name,type;
  Ability_Scores abilities;
  Weapon* weapons;
  Equipment* equipment;
  Purse purse;
  Skills skills;
};
