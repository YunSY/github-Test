#include<stdio.h>

void main()
{
	char name[20];

	
	fputs("이름을 입력하세요 : ", stdout);
	scanf("%s", name);

	printf("Hello World\n");
	printf("%s 바보\n", name);
}