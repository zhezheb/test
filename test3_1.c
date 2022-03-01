#include<stdio.h>

//void ffist(int arr[], int sz)
//{
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    for (i = 0; i < sz; i++)
//    {
//        int max = i;
//        for (j = i+1; j < sz; j++)
//        {
//            if (arr[j] > arr[max])
//            {
//                max = j;
//            }           
//        }
//        tmp = arr[i];
//        arr[i] = arr[max];
//        arr[max] = tmp;
//    }
//}
//int main()
//{
//    int arr[] = { 10,23,-8,69,47,20,39 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    ffist(arr, sz);
//    print(arr, sz);
//    return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };//Ö¸ÕëÊı×é 
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *((parr[i] + j)));
//		}printf("\n");
//	}
//    int(*pp)[5] = &arr2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", (*pp)[i]);//*pp==arr2
//		//printf("%d ", (*pp)[i]);
//	}
//	return 0;
//}

void print1(int(*p)[3], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d", (*p + i)[j]);
			printf("%d", p[i][j]);
			printf("%d", *(p[i]+j));
			printf("%d ", *((*p + i)+j));//*p==arr
		}printf("\n");
	}
}
int main()
{
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	print1(arr, 3, 4);

	return 0;
}
