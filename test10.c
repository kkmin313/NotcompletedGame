#include <stdio.h>
#include<windows.h>
main()
{
	int num = 3000;
	int num1, num2 = 0;
	int result = 0;

	int a=0 ;

	printf("================= \n\a");
	printf("  ������ ���ǥ   \n");
	printf("================= \n\a");

	printf("�⺻��� : %d�� %d�� \n\n", 1,3000);

	printf("�� ź�ð� �Է�: ");
	scanf_s("%d", &num1);


	
		if (num1 <= 30)
		{
			printf("��� %d�� \n", 3000);
		}

		else if (num1 > 30)
		{
			printf("��� %d�� \n\n\n", 3000 + (num1 - 30) * 50);
		}

		
	
			
			printf("����Ͻðڽ��ϱ�? \n");
			printf("���(1)  ����(0) \n");
			scanf_s("%d", &a);
			while (a != 1 && a != 0)
			{
				if (a != 0 && a != 1)
				{
					printf("�ٽ��Է�:");
					printf("���(1)  ����(0) \n");
					scanf_s("%d", &a);
				}

				system("cls");
			}

			while (a == 1)
			{
				switch (a)
				{
				case 1:


					printf("================= \n\a");
					printf("  ������ ���ǥ   \n");
					printf("================= \n\a");

					printf("�⺻��� : %d�� %d�� \n\n", 1, 3000);

					printf("�� ź�ð� �Է�: ");
					scanf_s("%d", &num1);



					if (num1 <= 30)
					{
						printf("��� %d�� \n", 3000);
					}

					else if (num1 > 30)
					{
						printf("��� %d�� \n", 3000 + (num1 - 30) * 50);
					}
					break;

				case 0:
					printf("���� \n\a");
					break;
				}
				printf("����Ͻðڽ��ϱ�? \n");
				printf("���(1)  ����(0) \n");
				scanf_s("%d", &a);
				system("cls");
				
				if (a == 1)
				{
					continue;
				}
				else if (a == 0)
				{
					break;
				}
				else if (a != 0 && a != 1)
				{
					printf("�ٽ��Է�:");
					printf("���(1)  ����(0) \n");
					scanf_s("%d", &a);
				}
				system("cls");
			}
			
		}
		
		
		
	
	

