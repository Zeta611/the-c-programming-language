#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
	int c, state, not_first;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				putchar('\n');
			}
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			putchar(c);
		} else {
			putchar(c);
		}
	}
}
