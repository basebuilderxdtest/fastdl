#define MAXLEVEL 72 // I suggest don't edit
#define MAX_PISTOLS_MENU 6 // I suggest don't edit

/*================================================================================
		       [!-->All those settings can be modified<--!]
=================================================================================*/
/*================================================================================
[Commenting/uncommenting MODS.]
=================================================================================*/
/*Normal mod,means simple cs style, without other mods.*/
//#define NORMAL_MOD

/*Uncomment it if you are using Zombie Swarm and comment other.*/
#define ZOMBIE_SWARM

/*Uncomment it if you are using Zombie Infection style mods and comment other.*/
//#define ZOMBIE_INFECTION

/*================================================================================
[Uncomment it if ZOMBIE_INFECTION and select zombie style MOD.]
=================================================================================*/
//#define ZOMBIE_BIOHAZARD
//#define ZOMBIE_PLAGUE
/*================================================================================
[End of MODS.]
=================================================================================*/

/*================================================================================
[Admin 'Flag' for giving extra Experience to admins each kill.]
=================================================================================*/
#define ADMIN_EXTRA ADMIN_LEVEL_A
/*================================================================================
[End of flags.]
=================================================================================*/

/*================================================================================
[Sounds, Level Up wave sound.]
=================================================================================*/
new const LevelUp[] = "umbrella/levelup.wav";
/*================================================================================
[End of sounds.]
=================================================================================*/

/*================================================================================
[XP Table, rank,gun level names.]
=================================================================================*/
new const LEVELS[MAXLEVEL] = { 
30, // Needed on level 1	// level 1, USP.
70, // Needed on level 2	// level 2, P228.
125, // Needed on level 3	// level 3, Fiveseven.
200, // Needed on level 4	// level 4, Deagle.
320, // Needed on level 5	// level 5, Elite. // End of Secondary Weapons.
400, // Needed on level 6	// level 6, TMP. 
555, // Needed on level 7	// level 7, Scout.
755, // Needed on level 8	// level 8, MAC-10.
1200, // Needed on level 9	// level 9, AWP.
2000, // Needed on level 10	// level 10, UMP 45.
3000, // Needed on level 11	// level 11, MP5 Navy.
4500, // Needed on level 12	// level 12, P90.
7200, // Needed on level 13	// level 13, M3/Pump.
9200, // Needed on level 14	// level 14, Famas.
11000, // Needed on level 15	// level 15, Galil.
14000, // Needed on level 16	// level 16, XM1014/Auto-pump.
16000, // Needed on level 17	// level 17, M4a1.
25000, // Needed on level 18	// level 18, Ak47.
28000, // Needed on level 19	// level 19, AUG.
32000, // Needed on level 20	// level 20, SG552.
36000, // Needed on level 21	// level 21, M249/Machinegun.
49000, // Needed on level 22	// level 22, G3SG1.
60180, // Needed on level 23	// level 23, SG550 // End of Primary Weapons.
60380, // Needed on level 24	// level 24, GLOCK Zloty //start Zloty weapon
60580, // Needed on level 25	// level 25, USP Zloty. 
60880, // Needed on level 26	// level 26, P228 Zloty.
61200, // Needed on level 27	// level 27, Fiveseven
61500, // Needed on level 28	// level 28, Deagle
61800, // Needed on level 29	// level 29, Elite. // End of Secondary Weapons.
62800, // Needed on level 30	// level 30, TMP.
72500, // Needed on level 31	// level 31, Scout
77000, // Needed on level 32	// level 32, MAC-10
79555, // Needed on level 33	// level 33, AWP
80666, // Needed on level 34	// level 34, UMP 45
90577, // Needed on level 35	// level 35, MP5 Navy
100000, // Needed on level 36	// level 36, P90
110000, // Needed on level 37	// level 37, M3/Pump
115204, // Needed on level 38	// level 38, Famas
120000, // Needed on level 39	// level 39, Galil
130040, // Needed on level 40	// level 40, XM1014/Auto-pump
140004, // Needed on level 41	// level 41, M4a1.
160000, // Needed on level 42	// level 42, Ak47
170000, // Needed on level 43	// level 43, AUG.
180000, // Needed on level 44	// level 44, SG552
190000, // Needed on level 45	// level 45, M249/Machinegun
200000, // Needed on level 46	// level 46, G3SG1
210000, // Needed on level 47	// level 47, SG550 // End of Primary Weapons.
220000, // Needed on level 48	// level 48, the rest of your life// Needed on level 44	// level 44, SG552
230000, // Needed on level 49	// level 45, M249/Machinegun
240000, // Needed on level 50	// level 46, G3SG1
250000, // Needed on level 51	// level 47, SG550 // End of Primary Weapons.
260000, // Needed on level 52	// level 48, the rest of your life

270000, // Needed on level 33	// level 33, AWP
280666, // Needed on level 34	// level 34, UMP 45
290000, // Needed on level 35	// level 35, MP5 Navy
310000, // Needed on level 36	// level 36, P90
320000, // Needed on level 37	// level 37, M3/Pump
330204, // Needed on level 38	// level 38, Famas
340000, // Needed on level 39	// level 39, Galil
350040, // Needed on level 40	// level 40, XM1014/Auto-pump
360004, // Needed on level 41	// level 41, M4a1.
375000, // Needed on level 42	// level 42, Ak47
380000, // Needed on level 43	// level 43, AUG.
390000, // Needed on level 44	// level 44, SG552
400000, // Needed on level 45	// level 45, M249/Machinegun
410000, // Needed on level 46	// level 46, G3SG1
420000, // Needed on level 47	// level 47, SG550 // End of Primary Weapons.
430000, // Needed on level 48	// level 48, the rest of your life// Needed on level 44	// level 44, SG552
40000, // Needed on level 49	// level 45, M249/Machinegun
450000, // Needed on level 50	// level 46, G3SG1
460000, // Needed on level 51	// level 47, SG550 // End of Primary Weapons.
500000, // Needed on level 52	// level 48, the rest of your life
}; // Needed Xp on each Levels

new const GUN_LEVELS[MAXLEVEL] = { 
0, // level 0, Glock.
1, // level 1, USP.
2, // level 2, P228.
3, // level 3, Fiveseven.
4, // level 4, Deagle.
5, // level 5, Elite. // End of Secondary Weapons.
6, // level 6, TMP. 
7, // level 7, Scout.
8, // level 8, MAC-10.
9, // level 9, AWP.
10, // level 10, UMP 45.
11, // level 11, MP5 Navy.
12, // level 12, P90.
13, // level 13, M3/Pump.
14, // level 14, Famas.
15, // level 15, Galil.
16, // level 16, XM1014/Auto-pump.
17, // level 17, M4a1.
18, // level 18, Ak47.
19, // level 19, AUG.
20, // level 20, SG552.
21, // level 21, M249/Machinegun.
22, // level 22, G3SG1.
23, // level 23, SG550. // End of Primary Weapons.
24, // level 0, Glock.
25, // level 1, USP.
26, // level 2, P228.
27, // level 3, Fiveseven.
28, // level 4, Deagle.
29, // level 5, Elite. // End of Secondary Weapons.
30, // level 6, TMP. 
31, // level 7, Scout.
32, // level 8, MAC-10.
33, // level 9, AWP.
34, // level 10, UMP 45.
35, // level 11, MP5 Navy.
36, // level 12, P90.
37, // level 13, M3/Pump.
38, // level 14, Famas.
39, // level 15, Galil.
40, // level 16, XM1014/Auto-pump.
41, // level 17, M4a1.
42, // level 18, Ak47.
43, // level 19, AUG.
44, // level 20, SG552.
45, // level 21, M249/Machinegun.
46, // level 22, G3SG1.
47, // level 23, SG550. // End of Primary Weapons.
48,
49,
50,
51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71
}; // Needed Level to choose gun from menu

new const RANKLEVELS[MAXLEVEL][] = { "Swiezak", "Pogromca Chomikow", "Zapoznany", "Bogus", "SzCzelec", "GanjaTeam", "Elite", "Rzeznik", "Msciciel",
"Zniwiarz", "Lowca", "Hardcor", "KOX", "Kozak", "Hunter", "PRO Lamer", "NoLife", "Assassin", "MordeKaiser", "Rozpierdalator", "Niszczyciel", "NieSmiertelny", 
"Sniper", "PRO Sniper",
"Zloty Szeregowy", "Zloty Starszy Szeregowy", "Zloty Kapral", "Zloty Starszy Kapral", "Zloty Plutonowy", "Zloty Sierzant", "Zloty Starszy Sierzant", "Zloty Mlodszy Chorazy",
"Zloty Chorazy", "Zloty Starszy Chorazy", "Zloty Starszy Chorazy Sztabowy", "Zloty Podporucznik", "Zloty Porucznik", "Zloty Kapitan", "Zloty Major", "Zloty Podpulkownik", "Zloty Pulkownik", 
"Zloty General Brygady", "Zloty General Dywizji", "Zloty General Broni", "Zloty Glowny General", "Zloty Marszalek", 
"Zloty Prezydent", "Zloty Pan Swiata","","","","","","","","","","","","","","","","","","","","","","","",""
}; // Rank Level Names

new const RANK[MAXLEVEL][] = { "Glock", "USP", "P228", "FiveseveN", "Deagle", "Dual Elite", 
"TMP", "Scout", "MAC-10", "AWP", "UMP 45", "MP5", "P90", "M3", "Famas", "Galil", "XM1014", 
"M4A1", "AK-47", "AUG", "SG-552", "M249", "G3SG1", "SG-550",
"Zloty Glock", "Zloty USP", "Zloty P228", "Zloty FiveseveN", "Zloty Deagle", "Zloty Dual Elite", 
"Zloty TMP", "Zloty Scout", "Zloty MAC-10", "Zloty AWP", "Zloty UMP 45", "Zloty MP5", "Zloty P90", "Zloty M3", "Zloty Famas", "Zloty Galil", "Zloty XM1014", 
"Zloty M4A1", "Zloty AK-47", "Zloty AUG", "Zloty SG-552", "Zloty M249", "Zloty G3SG1", "Zloty SG-550","Legendarny MAC-10","","","Legendarny MP5","","","Legendarny Famas","","","Legendarne XM","","","Legendarny AUG","","","Legendarne M4A1","","","Legendarne AK-47","","","Legendarny SG550","",""
}; // Gun Level Rank Names
/*================================================================================
[End of XP Table.]
=================================================================================*/

/*================================================================================
[Grenades on each level settings.]
=================================================================================*/
new const FLASHBANG_LEVEL[MAXLEVEL][] = { "weapon_flashbang", // 0 level, nothing if you want,won't give grenade on level 0
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang",
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", // 9 level
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang",
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang","weapon_flashbang","	 weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang"," weapon_flashbang",
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", // 9 level
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang",
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang",
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang", 
"weapon_flashbang", "weapon_flashbang", "weapon_flashbang"

}; // Give Flashbangs on current level

new const HEGRENADE_LEVEL[MAXLEVEL][] = { "weapon_hegrenade",
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", // 9 level
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
"weapon_hegrenade",
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", // 9 level
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
"weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
"weapon_hegrenade","weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
 "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade",
 "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
 "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
 "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", 
 "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade", "weapon_hegrenade"
}; // Give Hegrenade on current level

new const SMOKEGRENADE_LEVEL[MAXLEVEL][] = { "weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", // 9 level
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
"weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", // 9 level
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade" , "weapon_smokegrenade",
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", 
"weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
 "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade",
 "weapon_smokegrenade", "weapon_smokegrenade", "weapon_smokegrenade"
}; // Give Smokegrenade on current level

/*================================================================================
[Weapon's backpack ammo on spawn/menu choose.]
=================================================================================*/
new const AMMO2CONST[MAXLEVEL] = { 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 90, // <--awp 
400, 400, 80, 80, 400, 400, 400, 400, 200, 200, 400,
400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 400, 90, // <--awp 
400, 400, 80, 80, 400, 400, 400, 400, 200, 200, 400,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
}; // Weapons Ammo