#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.cpp"

int main() {
	int run = 1;
	while (run) {
		Menu();
		puts("�޴��� �����Ͻÿ� : ");
		char c = getchar(); getchar();
		switch (c)
		{
		case '1':
			printf("��� 1\n");
			break;
		case '2':
			printf("��� 2\n");
			break;
		case '3':
			printf("��� 3\n");
			break;
		case '4':
			printf("��� 4\n");
			break;
		case '5':
			printf("��� 5\n");
			break;
		case '0':
			printf("��� 0\n");
			run = 0;
			break;
		}
	}
}
