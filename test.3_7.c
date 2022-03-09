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
//int main()
//{
//	int t;
//	scanf_s("%d", &t);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < t; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < t; i++)
//	{
//		for (int j = 1; j < arr[i]; j++)
//		{
//			if(j)
//		}
//	}
//	        
//	return 0;
//}
//void del(int arr[], int n, int m)
//{
//	int j = 0;
//	for (j = m; j < n-1; j++)
//	{
//		arr[j] = arr[j + 1];
//	}
//}
//void print(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf_s("%d", &m);
//	del(arr, n, m);
//	print(arr, n);//删除特定元素
//	return 0;
//}
//#include<window.h>
int main()
{
again:	printf("你是大傻币吗：1(yes)/0(no)");
	int input;
	scanf_s("%d", &input);
	if (input == 1)
	{
		printf("恭喜你，答对了");
	}
	else if (input == 0)
	{
		printf("000");
	}
	else
	{
		printf("有够沙的");
		goto again;
	
	}
	return 0;

}