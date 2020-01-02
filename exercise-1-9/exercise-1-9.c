#include <stdio.h>

/* We haven't learned &&, ||, and else */
main()
{
	int c, prev;

	prev = 'a';
	while ((c = getchar()) != EOF) {
		if (prev != ' ') {
			putchar(c);
		}
		if (prev == ' ') {
			if (c != ' ') {
				putchar(c);
			}
		}
		prev = c;
	}
}
