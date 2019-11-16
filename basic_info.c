#include <stdlib.h>
#include <stdio.h>

#include "basic_info.h"

Race_Profile race_profile_init(PHB_Race race_profile);
Class_Profile class_profile_init(PHB_Class class_profile);

// Ability scores and Skills
Ability_Scores gen_abilities(Class_Profile class);
Skills gen_skills(Ability_Scores abilities);
