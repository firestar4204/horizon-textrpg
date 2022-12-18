#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef HAVE_NCURSES_H
# include <ncurses.h>
#endif

int
main(int argc,
     char **argv)
{
	initscr();
	printw("test");
	refresh();
	getch();
	endwin();

	return 0;
}
