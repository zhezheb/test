//#include<stdio.h>
//#include<math.h>

//char test_change(char input)
//{
//	if (input >= 'a'&&input <= 'z')
//		return input - 32;
//	else
//		return input;
//}
//int main()
//{
//	char input;
//	scanf_s("%c", &input);
//	char put=test_change(input);
//	printf("%c\n", put);
//
//	return 0;
//}
//int main()
//{
//	char input;
//	scanf_s("%c", &input);
//	if (input >= 'a' && input <= 'z')
//	{
//		printf("lower\n");
//	}
//	else if (input >= 'A' && input <= 'Z')
//	{
//		printf("upper\n");
//	}
//	else if (input >= '0' && input <= '9')
//	{
//		printf("digit\n");
//	}
//	else
//	{
//		printf("other\n");
//	}
//	return 0;
//}
//int topp_t(int a)
//{
//	int i = 0;
//	int m = 0;
//	int sum = 0;
//	int b = a;
//	for (i = 0; i < 3; i++)
//	{
//		m = a % 10;
//		sum += (int)pow(m, 3);
//		a = a / 10;
//	}
//	if (sum == b)
//	{
//		return 1;
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	int a = 0;
//	printf("������һ����λ����");
//	scanf_s("%d", &a);
//	int x = topp_t(a);
//	printf("%d\n", x);
//	return 0;
//}
//void bubbl_e(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz-1; i++)//�Ƚϴ���
//	{
//		for (j = 0; j < sz-i-1; j ++ )
//		{
//			if(arr[j]>arr[j+1])
//				{ 
//				   tmp = arr[j];
//				   arr[j] = arr[j+1];
//				   arr[j+1] = tmp; 
//				}//ð������ǰһ�����һ�� ����
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 84,26,34,-9,49,17,23,67 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubbl_e(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubbl_e(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)//�Ƚϴ���
//	{
//		int max = i;
//		for (j =i+1; j < sz ; j++)
//		{
//			if (arr[j] > arr[max])
//			{
//				max = j;	
//			}
//			tmp = arr[max];
//			arr[max] = arr[i];
//			arr[i] = tmp;//һ�ֽ���ԭ����ı�2��ֵ
//		}
//	}//ѡ������ѡ�����1��Ϊ���ֵ�������Ƚϣ����ֵ��max,��ѡ��+1����ʱ�Ƚϴ���-i
//}
//int main()
//{
//	int arr[] = { 84,26,34,-9,49,17,23,67 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubbl_e(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}