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
Race_Profile race_profile_init(PHB_Race race);
Class_Profile class_profile_init(PHB_Class class);

// Ability scores and Skills
Ability_Scores gen_abilities(Class_Profile class);
Skills gen_skills(Ability_Scores abilities);

// Item Creators
// Weapon create_weapon(Weapon_Type w_type,Damage_Type d_type,int save,
//   int throw_max,char* distance,char* cooldown, char* damage);
char ** create_dragonborn_ancestry();

// Enumerators for easier identification
enum PHB_Race {Dragon_Born,Dwarf,Elf,Gnome,Half_Elf,Halfling,Half_Orc,
               Human,Tiefling};
enum PHB_Class {Barbarian,Bard,Cleric,Druid,Fighter,Monk,Paladin,Ranger,
                Rogue,Sorcerer,Warlock,Wizard};
enum Gender {Male,Female,Agender,Non_Binary,Bigender,Unknown};
enum Language {Common,Draconic};
enum Equipment_Type {Light_Armour,Medium_Armour,Heavy_Armour,Shield,Tool};
Weapon_Type {Simple,Martial,Breath};
enum Damage_Type {Acid,Lightning,Fire,Poison,Cold};

// Race-specific alterations
struct Race_Profile {
  PHB_Race race;
  char*** names, types, resistances;
  int ability_modifiers[6],age_range[2],alignment_weight[6];
  Language* languages;
  double height_avg;
  int weight_avg,speed;
  char** ancestry;
};

struct Class_Profile {
  PHB_Class class;
  char** features;
  int hit_points,hit_dice;
  int* ability_weights;
  int* armour_proficiencies,weapon_proficiences;
  char*** starting_equip;
};

// Holds ability scores and modifiers
struct Ability_Scores{
   int strength[2],dexterity[2],consitution[2],intelligence[2],wisdom[2],
       charisma[2];
};
struct Alignment {
  int lawful_good,neutral_good,chaotic_good,lawful_neutral,true_neutral,
      chaotic_neutral,lawful_evil,neutral_evil,chaotic_evil;
};

// Skill structure
struct Skills {
  int acrobatics,animal_handling,arcana,athletics,deception,history,history,
      insight,imidation,investigation,medicine,nature,perception,performance,
      persuasion,religion,slight_of_hand,stealth,survival;
};

// Specific weapon and attack ability breakdown
// struct Weapon {
//   Weapon_Type weapon_type;
//   Damage_Type damage_type;
//   int save, throw_max;
//   char* distance,cooldown,damage;
// };

// Player's money
struct Purse {
  int ep,pp,gp,sp,cp;
};

// struct Equipment {
//   Equipment_Type type;
//   char* name, decription;
//   int cost,weight;
//   int* likely_classes;
// };

// Character profile
struct Character {
  PHB_Race race;
  PHB_Class class;
  int level;
  Gender gender;
  char* name,type;
  Ability_Scores abilities;
  char** weapons;
  Equipment* equipment;
  Purse purse;
  Skills skills;
};
