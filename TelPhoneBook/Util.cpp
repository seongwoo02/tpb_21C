#include <stdio.h>

void Menu()
{
	puts("===================");
	puts("1. ��ȭ��ȣ ���");
	puts("2. ��ȭ��ȣ ���");
	puts("3. ��ȭ��ȣ �˻�");
	puts("4. ��ȭ��ȣ ����");
	puts("5. ��ȭ��ȣ Text ���� ���");
	puts("0. ���α׷� ����!");
	puts("");
}

void Flush()
{
	while (getchar() != '\n')
		;
}