#include<stdio.h>

//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int x ;
//	int y;
//	int z;
//	int flag = 0;
//	for (x = 1; x <=9 ;x++)
//	{
//		for (y = 1; y <= 9; y++)
//		{
//			for (z = 0; z <= 9; z++)
//			{
//				if (100 * x + y * 10 + z + y * 100 + z * 10 + z == n)
//				{
//					printf("%4d%4d%4d\n", x, y, z);
//					flag = 1;
//				}
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("no answer");
//	}
//	return 0;//                  1076
//}
int main()
{
	int t;
	scanf_s("%d", &t);
	int arr[100] = { 0 };
	int i = 0;
	for (i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < t; i++)
	{
		for (int j = 1; j < arr[i]; j++)
		{
			if(j)
		}
	}
	        
	return 0;
}