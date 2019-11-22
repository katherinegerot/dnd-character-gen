/**
 * Author: Katherine Gerot
 * Creation Date: 11/16/2019
 * Last Edited: 11/22/2019
 * Version 1.1
 *
 * Functions for character creation
 * V1.0: Completing Dragon Born and Barbarian Class
 * V1.1: Redesigning flow, moving roll utils to new files
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "basic_info.h"
#include "names.h"

// Race_Profile race_profile_init(PHB_Race race){
//   Race_Profile rp;
//   rp->race = race;
//   rp->names = possible_names[race];
//   switch (race) {
//     case Dragon_Born:
//       rp->types = {"black", "blue", "brass", "bronze", "copper", "gold",
//                    "green", "red", "silver", "white"};
//       rp->resistances = {"the damage type associated with your draconic ancestry"};
//       rp->languages = {Common, Draconic};
//       rp->ability_modifiers = {2,0,0,0,0,1};
//       rp->age_range = {15,80};
//       rp->alignment_weight = {8,2,5,5,2,8};
//       rp->height_avg = 6.5;
//       rp->weight_avg = 250;
//       rp->speed = 30;
//       rp->ancestry = create_dragonborn_ancestry();
//       break;
//   }
//   return rp;
// }
// //enum Equipment_Type {Light_Armour,Medium_Armour,Heavy_Armour,Shield,Tool};
// //Weapon_Type {Simple,Martial,Breath};
// Class_Profile class_profile_init(PHB_Class class){
//   Class_Profile cp;
//   cp->class = class;
//   switch (class) {
//     case Barbarian:
//       cp->starting_equip = {{"Greataxe","Battleaxe","Flail","Glaive","Greatsword",
//          "Halberd","Lance","Longsword","Maul","Morningstar","Pike","Rapier",
//          "Scimitar","Shortsword","Trident","War Pick","Warhammer","Whip"},
//         {"Two Handaxes","Club","Dagger","Greatclub","Handaxe","Javelin",
//          "Light Hammer","Mace","Quarterstaff","Sickle","Spear"},
//         {"Explorer's Pack"},{"Four Javelins"}};
//       cp->features = {"Rage (2 Rages, +2 Damage)\nUnarmored Defense"};
//       cp->hit_points = 12;
//       cp->hit_dice = "1d12";
//       cp->ability_weights = {6,1,5,1,1,1};
//       cp->armour_proficiencies = "Light and medium armour, shields";
//       cp->weapon_proficiences = "Simple and martial weapons";
//       cp->tools = "None";
//       cp->saving_throws = "Strength, Consitution"
//       cp->skill_choices = {1,3,7,10,11,17};
//       cp->num_choose = 2;
//       break;
//   }
//   return cp;
// }
// Ability_Scores gen_abilities(Class_Profile class, Race_Profile race){
//   Ability_Scores abilities;
//   abilities->strength[1] = race->ability_modifiers[0];
//   srand(time(0));
//   int rolls[6];
//   for(int i = 0; i < 6; i++) {
//     rolls[i] = (rand() % 20) + 1;
//   }
//   quicksort(rolls, 0, 5);
//   int arr[6];
//   for(int i = 0; i < 6; i++) {
//     max(class->ability_weights);
//     arr[i] = rolls[i];
//   }
//
// }
//
// Ability_Scores assign_abilities(int arr[], int mod){
//   Ability_Scores a;
//   a->strength[mod] = arr[0];
//   a->dexterity[mod] = arr[1];
//   a->consitution[mod] = arr[2];
//   a->intelligence[mod] = arr[3];
//   a->wisdom[mod] = arr[4];
//   a->charisma[mod] = arr[5];
//   return a;
// }
//
// int max(int arr[]){
//   int max = arr[0];
//   int index = 0;
//   for (int i = 1; i < 6; i++){
//     max = arr[i] > max ? arr[i] : max;
//     index = i;
//   }
//   return index;
// }
//
// void quicksort(int arr[], int a, int b) {
//     if (a < b){
//       int p = arr[b], c = a;
//       for (int i = a; i <= b; i++){
//           if (arr[i] <= p) {
//             int temp = arr[i];
//             arr[i] = arr[c];
//             arr[c] = temp;
//             c++;
//           }
//       }
//     quicksort(arr, a, c-2);
//     quicksort(arr, c, b);
// }
//
//
// Skills gen_skills(Ability_Scores abilities){
//
// }
//
// char ** create_dragonborn_ancestry(){
//   char ** a = (char**)malloc(sizeof(char*) * 10);
//   for(int i = 0; i < 10; i++) {
//     switch (i) {
//       case 0: case 4: a[i] = "Acid Breath, 5 by 30 ft. line (Dex. save)";
//         break;
//       case 1: case 3: a[i] = "Lightning Breath, 5 by 30 ft. line (Dex. save)";
//         break;
//       case 2: a[i] = "Fire Breath, 5 by 30 ft. line (Dex. save)";
//         break;
//       case 5: case 7: a[i] = "Fire Breath, 15 ft. cone (Dex. save)";
//         break;
//       case 8: case 9: a[i] = "Cold Breath, 15 ft. cone (Con. save)";
//         break;
//       case 6: a[i] = "Poison Breath, 15 ft. cone (Con. save)";
//         break;
//     }
//   }
//   return a;
// }

// Weapon * create_dragonborn_ancestry(){
//   Weapon * a = (Weapon*)malloc(sizeof(Weapon) * 10);
//   for(int i = 0; i < 10; i++) {
//     switch (i) {
//       case 0: case 4:
//         a[i] = create_weapon(Breath,Acid,1,8,"5 by 30 ft. line","Can be used once every rest","2d6");
//         break;
//       case 1: case 3:
//         a[i] = create_weapon(Breath,Lightning,1,8,"5 by 30 ft. line","Can be used once every rest","2d6");
//         break;
//       case 2:
//         a[i] = create_weapon(Breath,Fire,1,8,"5 by 30 ft. line","Can be used once every rest","2d6");
//         break;
//       case 5: case 7:
//         a[i] = create_weapon(Breath,Fire,1,8,"15 ft. cone","Can be used once every rest","2d6");
//         break;
//       case 8: case 9:
//         a[i] = create_weapon(Breath,Cold,2,8,"15 ft. cone","Can be used once every rest","2d6");
//         break;
//       case 6:
//         a[i] = create_weapon(Breath,Poison,2,8,"15 ft. cone","Can be used once every rest","2d6");
//         break;
//     }
//   }
//   return a;
// }
// Weapon create_weapon(Weapon_Type w_type,Damage_Type d_type,char save,
//   int throw_max,char* distance,char* cooldown, char* damage){
//     Weapon weapon;
//     weapon->weapon_type = w_type;
//     weapon->damage_type = d_type;
//     weapon->save = save;
//     weapon->throw_max = throw_max;
//     weapon->distance = distance;
//     weapon->cooldown = cooldown;
//     weapon->damage = damage;
//     return weapon;
// }
