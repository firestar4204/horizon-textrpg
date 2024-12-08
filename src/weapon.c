#include <config.h>

#include <stdlib.h>
#include <stdio.h>

#ifdef HAVE_NCURSES_H
# include <ncurses.h>
#endif

#include <hrpg/player.h>
#include <hrpg/rand.h>
#include <hrpg/weapon.h>

short weapon_stats[] = {125, 185, 100, 135};
char *weapon_names[] = {"Spear", "Sharpshot Bow", "Hunter Bow", "Blast Sling"};

weapon_types
randomize_weapon()
{
	short rand_number;

start:
	rand_number = (rand() % 4);

	switch (rand_number) {
		case 0:
			goto start;
			break;
		case 1:
			return SHARPSHOT_BOW;
			break;
		case 2:
			return HUNTER_BOW;
			break;
		case 3:
			return BLAST_SLING;
			break;
		default:
			fprintf(stderr, "bad number from randomize_weapon()");
			goto start;
			break;
	}
}

void
randomize_player_weapons()
{
	int i;

	current_player.weapons[0] = SPEAR;
	for (i = 1; i < 3; i++) {
		current_player.weapons[i] = randomize_weapon();
	}
}

void
print_weapons()
{
	int i;

	printw("Your weapons are:\n");
	for (i = 0; i < 3; i++) {
		printw("%d: %s\n", current_player.weapons[i] + 1, weapon_names[current_player.weapons[i]]);
	}
	refresh();
}

