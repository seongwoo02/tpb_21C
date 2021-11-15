#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "PersonArray.h"
#include "Util.h"

int main()
{
	PersonArray pa;
	int run = 1;
	InitPersonArray(&pa);

	while (run)
	{
		Menu();
		puts("메뉴를 선택하시오:");

		char c = _getch();
		switch (c)
		{
		case '1':
			AddPersonArray(&pa);
			break;
		case '2':
			PrintPersonArray(&pa);
			break;
		case '3':
			printf("기능 3\n");
			break;
		case '4':
			printf("기능 4\n");
			break;
		case '5':
			printf("기능 5\n");
			break;
		case '0':
			run = 0;
			break;
		}
	}

	UninitPersonArray(&pa);
}