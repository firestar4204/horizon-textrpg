#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef STDC_HEADERS
# include <stdlib.h>
#endif

#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif

#ifdef HAVE_NCURSES_H
# include <ncurses.h>
#endif

void
choose(void)
{
	char input[2];
	int choice;

start:
	printw("You can:\n");
	printw("1. Attack\n");
	printw("2. Dodge\n");
	printw("3. Heal\n");
	printw("4. Quit\n");
	printw("\n");
	printw("~$ ");
	refresh();
	scanw("%2s", input);
	refresh();
	choice = atoi(input);

	switch (choice) {
		case 1:
			printw("You have selected 1: Attack.\n");
			refresh();
			break;
		case 2:
			printw("You have selected 2: Dodge.\n");
			refresh();
			sleep(3);
			clear();
			refresh();
			goto start;
			break;
		case 3:
			printw("You have selected 3: Heal.\n");
			refresh();
			break;
		case 4:
			printw("Have a nice day!\n");
			refresh();
			sleep(3);
			endwin();
			exit(0);
			break;
		default:
			printw("Incorrect choice.\n");
			refresh();
			sleep(3);
			clear();
			refresh();
			goto start;
			break;
	}
}
