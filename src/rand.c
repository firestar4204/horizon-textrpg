#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef HAVE_STDLIB_H
# include <stdlib.h>
#endif

#ifdef HAVE_TIME_H
# include <time.h>
#endif

void
init_rand()
{
	time_t t;

	srand((unsigned) time(&t));
}

