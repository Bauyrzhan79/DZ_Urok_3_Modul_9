#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "Struct.h"

void main()
{
	int nz;
	setlocale(LC_ALL, "Rus");
	

	do
	{
		
		printf("������� ����� ������� (��� ������ ������� 0): ");
		scanf("%d", &nz);
		system("cls");
		
		/*1.	������� ��������� � ������ NOTE1, ���������� ����: 
		a.Name � ������� � ��������
		b.TELE � ����� ��������
		c.DATE � ���� ��������(���, �����, �����)
			�������� ���������, �����������:
		�	���� � ���������� ������ � ������ BLOCK, ��������� �� 9 ��������� ���� NOTE1, 
		������ ������ ���� ����������� �� ���������;
		�	����� �� ����� ���������� � �����, ��� ��� �������� ���������� �� �����, 
		�������� �������� ������� � ����������; ���� ������ �������� ��� � ������ ���������.*/

		if (nz == 1)
		{
			note1 *block[9];

			printf("������� ������� ��������: ");
			

		}

	} while (nz != 0);


	system("pause");
}