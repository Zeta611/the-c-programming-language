#include <stdio.h>

main()
{
	int c, flag;

	while ((c = getchar()) != EOF) {
		flag = 1;
		if (c == '\t') {
			printf("\\t");
			flag = 0;
		}
		if (c == '\b') {
			printf("\\b");
			flag = 0;
		}
		if (c == '\\') {
			printf("\\\\");
			flag = 0;
		}
		if (flag) {
			putchar(c);
		}
	}
}
