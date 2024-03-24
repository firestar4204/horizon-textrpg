#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef HAVE_NCURSES_H
# include <ncurses.h>
#endif

#include <hrpg/about.h>
#include <hrpg/io.h>


int
main(int argc,
     char **argv)
{
	initscr();
	about();
	clear();
	choose();
	endwin();

	return 0;
}
