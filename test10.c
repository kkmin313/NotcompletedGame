#include <stdio.h>
#include<windows.h>
main()
{
	int num = 3000;
	int num1, num2 = 0;
	int result = 0;

	int a=0 ;

	printf("================= \n\a");
	printf("  유원지 요금표   \n");
	printf("================= \n\a");

	printf("기본요금 : %d당 %d원 \n\n", 1,3000);

	printf("말 탄시간 입력: ");
	scanf_s("%d", &num1);


	
		if (num1 <= 30)
		{
			printf("요금 %d원 \n", 3000);
		}

		else if (num1 > 30)
		{
			printf("요금 %d원 \n\n\n", 3000 + (num1 - 30) * 50);
		}

		
	
			
			printf("계속하시겠습니까? \n");
			printf("계속(1)  종료(0) \n");
			scanf_s("%d", &a);
			while (a != 1 && a != 0)
			{
				if (a != 0 && a != 1)
				{
					printf("다시입력:");
					printf("계속(1)  종료(0) \n");
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
					printf("  유원지 요금표   \n");
					printf("================= \n\a");

					printf("기본요금 : %d당 %d원 \n\n", 1, 3000);

					printf("말 탄시간 입력: ");
					scanf_s("%d", &num1);



					if (num1 <= 30)
					{
						printf("요금 %d원 \n", 3000);
					}

					else if (num1 > 30)
					{
						printf("요금 %d원 \n", 3000 + (num1 - 30) * 50);
					}
					break;

				case 0:
					printf("종료 \n\a");
					break;
				}
				printf("계속하시겠습니까? \n");
				printf("계속(1)  종료(0) \n");
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
					printf("다시입력:");
					printf("계속(1)  종료(0) \n");
					scanf_s("%d", &a);
				}
				system("cls");
			}
			
		}
		
		
		
	
	

