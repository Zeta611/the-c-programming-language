#include <stdio.h>

main()
{
	int c, cnt;

	cnt = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++cnt;
		}
		if (c == '\t') {
			++cnt;
		}
		if (c == '\n') {
			++cnt;
		}
	}
	printf("%d\n", cnt);
}
