#include <stdio.h>
#include <string.h>

#define PRAISE "What a test!"
#define PRAISE2 "What a test! "

int main(void)
{
	char name[40];

	printf("what's your name?\n");
	scanf("%s", name);
	printf("hello,%s. %s\n", name, PRAISE);

	printf("your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof(name));
	printf("the phrase of praise has %d letters and occupies %d memory cells.\n", strlen(PRAISE2), sizeof(PRAISE2));


	return 0;
}
