#include<stdio.h>
//int main()
//{
//	printf("hell world");
//	return 0;
//}
//void ttt(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,89 };
//	ttt(arr);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s", arr);
//	printf("\n");
//	printf("%s ", pc);
//	printf("\n");
//	//printf("%c", arr);
//	//printf("\n");
//	printf("%c", *pc);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	printf("%p\n", &p1);
//	printf("%p\n", &p2);
//	printf("%p\n", arr1);
//	printf("%p\n", arr2);
//	printf("%c ", *p1);
//	printf("%c ",*p2);
//	if (p1 == p2)
//	{
//		printf("hehhhhhhhe");
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	} 
//	
//}
void bubbll(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz-i-1; j++)//5 2 3 4 '1每一次  j=0  处开始
		{                           //2 5 3 4 '1
			if (arr[j] > arr[j + 1])//2 3 4 5 '1
			{                       //2 3 4 1 '5
				tmp = arr[j];       //2 3 4 1 '5
				arr[j] = arr[j + 1];//2 3 1 '4 '5
				arr[j + 1] = tmp;
			}

		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 12,23,74,69,1,52,-7 };
	int sz = sizeof(arr) / sizeof(arr[0]);//冒泡排序
	bubbll(arr, sz);
	print(arr, sz);
	//printf("%d ", sz);
	return 0;
}