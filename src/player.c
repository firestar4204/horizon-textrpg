#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef HAVE_STDIO_H
# include <stdio.h>
#endif
#ifdef HAVE_STDLIB_H
# include <stdlib.h>
#endif

#ifdef HAVE_NCURSES_H
# include <ncurses.h>
#endif

#include <hrpg/player.h>
#include <hrpg/weapon.h>

player current_player;

void
init_player()
{
	current_player.hp = 500;
	current_player.stamina = 100;
	current_player.potion_count = 0;
	randomize_player_weapons();
	//randomize_potions();
	print_player_stats();
	print_weapons();
}

void
print_player_stats()
{
	printw("You have %d hp\n", current_player.hp);
	printw("You have %d stamina.\n", current_player.stamina);
	printw("You have %d health potions.\n", current_player.potion_count);
	refresh();
}

void
dodge()
{
	//TODO: implement dodge()
}

void
attack()
{
	//TODO: implement attack()
}

