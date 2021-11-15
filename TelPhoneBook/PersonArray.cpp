#include "PersonArray.h"
#include <stdio.h>
#include <string.h>

void InitPersonArray(PersonArray* pa)
{
	pa->perCount = 0;
}
void UninitPersonArray(PersonArray* pa)
{
	pa->perCount = 0;
}
void AddPersonArray(PersonArray* pa)
{
	Person per;

	InputPerson(&per);
	pa->arr[pa->perCount++] = per;
}
void PrintPersonArray(PersonArray* pa)
{
    for (int i = 0; i < pa->perCount; ++i)
        PrintPerson(&pa->arr[i]);
}
void SearchPersonArray(PersonArray* pa)
{
    char name[20];
    printf("�˻� �̸� �Է�:");
    gets_s(name, 20);
    for (int i = 0; i < pa->perCount; ++i)
    {
        if (strcmp(name, pa->arr[i].name) == 0)
        {
            printf("ã�� �̸�: [%d] :", i);
            PrintPerson(&pa->arr[i]);
            break;
        }
    }
}
void RemovePersonArray(PersonArray* pa)
{
    char name[20];
    printf("���� �̸� �Է�:");
    gets_s(name, 20);
    for (int i = 0; i < pa->perCount; ++i)
    {
        if (strcmp(name, pa->arr[i].name) == 0)
        {
            printf("������ �̸�: [%d] :", i);
            PrintPerson(&pa->arr[i]);

            for (int j = i; j < pa->perCount - 1; ++j)
                pa->arr[j] = pa->arr[j + 1];
            --pa->perCount;
            printf("���� �Ϸ�~!\n");

            break;
        }
    }
}
void WriteTextPersonArray(PersonArray* pa)
{
    FILE* fp = NULL;

    fopen_s(&fp, "telphonebook.txt", "w");
    if (fp == NULL)
        return;

    for (int i = 0; i < pa->perCount; ++i)
        fprintf(fp, "Person : [%d]-name:%s, phone:%s\n", i, pa->arr[i].name, pa->arr[i].phone);

    fclose(fp);
}