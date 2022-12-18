#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef HAVE_NCURSES_H
# include <ncurses.h>
#endif

#include <hrpg/about.h>

void
about()
{
	printw("hrpg - a horizon fangame by firestar4204\n");
	printw("Copyright (c) 2022 firestar4204\n\n");

	printw("This program is free software: you can redistribute it and/or modify\n");
	printw("it under the terms of the GNU General Public License as published by\n");
	printw("the Free Software Foundation, version 3.\n\n");

	printw("This program is distributed in the hope that it will be useful,\n");
	printw("but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
	printw("MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n");
	printw("GNU General Public License for more details\n\n");
	
	printw("You should have recieved a copy of the GNU General Public License\n");
	printw("along with this program.  If not, see <http://www.gnu.org/licenses/>.\n\n");

	printw("Press any key to continue... ");
	refresh();
	getch();
}
