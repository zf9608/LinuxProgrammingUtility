#include <stdio.h>

void lovecall();

char *getname()
{
	static char name[128];

	printf("Input name : ");
	scanf("%s", name);
	return name;
}

int main()
{
	char *str;

	str = getname();
	printf("I like you.\n");
	printf("%s\n", str);
	//lovecall();

	return 0;
}
