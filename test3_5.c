#include<stdio.h>

//int main()
//{
//    int n;
//    scanf_s("%d", &n);
//    int i = 0;
//    int arr[100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf_s("%d", &arr[i]);
//    }
//    int tmp;
//    int min = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[min] > arr[i])
//        {
//            tmp = min;
//            min = i;
//            i = tmp;
//        }
//    }
//    printf("%d %d", arr[min], min);
//    return 0;//             1115
//}//                         3��6��
//double teee(n)
//{
//	int i = 0;
//	double sum = 0.0;
//	double b = 1.0;
//	for (i = 0; i < n; i++)
//	{
//		sum += b*(i+1)/(2*i+1);
//		b = -b;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	double m = teee(n);
//	printf("%.3f ", m);
//	return 0;//                  1042
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
//	double count = 0.0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] < 60)
//		{
//			count++;
//		}
//	}
//
//	printf("%.2f", count / n);
//	return 0;//                1044
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int bo = 1;
//	for (i = 0; i < n; i++)
//	{
//	  scanf_s("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			bo *= arr[i];
//		}
//	}
//	printf("%d", bo);
//	return 0;//                     1046
//}

//void sort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for(j=i+1;j<n;j++)
//		{
//			if (arr[i] > arr[j ])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//void printarr(int arr[],int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
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
//	  scanf_s("%d", &arr[i]);
//	}
//	sort(arr, n);
//	printarr(arr,n);
//	return 0;//                       1119
//}
#include<stdio.h>
int main()
{
    char ch;//�����ַ�ch
    int d = 0;//��ʼ��dΪ0
    while (ch = getchar(), ch != '\n')//�����벻���ڻ��з�ʱ���������в���
        d = d * 2 + (ch - '0');//���ж����Ƽ���ÿ�ν��*2���൱����ǰ����һλ
    printf("%d\n", d);//������d
    return 0;//���������˳�
}
