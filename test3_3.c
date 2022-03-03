#include<stdio.h>
#include<math.h>

//#define PI 3.14159
//
//double okl(double x, double y)
//{
//	double a = 2 * PI * x * y + 2 * PI * x * x;
//	return a;
//}
//int main()
//{
//	double r;
//	double h;
//	scanf_s("%lf%lf", &r, &h);
//	double ss = okl(r, h);
//	printf("%.2lf", ss);
//	return 0;//                1011
//}
//char change(char x)
//{
//	if (x >= 'A' && x <= 'Z')
//	{
//		return x;
//	}
//	else
//	{
//		return x - 32;
//	}
//}
//int main()
//{
//	char input;
//	scanf_s("%c", &input);
//	int ss=change(input);
//	printf("%d", ss - 64);
//	return 0;
//}
//#include<ctype.h>
//int main()
//{
//	char ch;
//	int index;
//
//	ch = getchar();
//	ch = tolower(ch);//改为小写
//	index = ch - 'a' + 1;
//	printf("%d", index);
//	return 0;//           1024
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
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个三位数；");
//	scanf_s("%d", &a);
//	int x = topp_t(a);
//	printf("%d\n", x);
//	return 0;//           1027
//}
//int cal(int a, int b, int c, int d, int e,int x,int y,int z)
//{
//	int m = 2 * (a * b + b * c + c * a) + 8 * x * d + 8 * y * d + 8 * z * d;
//	return m;
//}
//int call(int a, int b, int c, int d, int e,int x,int y,int z)
//{
//	int n = a * b * c - 2 * x * y * d - 2 * x * z * d - 2 * y * z * d;
//	return n;
//}
//int main()
//{
//	int a, b, c, d, e;
//	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);
//	int x, y, z;
//	x = a - 2 * e;
//	y = b - 2 * e;
//	z = c - 2 * e;
//	int sss=cal(a, b, c, d, e,x,y,z);//表面积
//	int s = call(a, b, c, d, e,x,y,z);//体积
//	printf("%d %d", sss, s);
//	return 0;//               1017
//}
//int main()
//{
//	double a, b;
//	char op;
//	double and;
//	int flag = 0;
//	scanf_s("%lf %c %lf", &a,&op, &b);
//	switch (op)
//	{
//	case '+':
//		and = a + b;
//		break;
//	case'-':
//		and = a - b;
//		break;
//	case'*':
//		and = a * b;
//		break;
//	case'/':
//		if (fabs(b) <= 1e-10)
//			flag = 1;
//		else
//			and = a / b;
//		break;
//	default:
//		flag = 1;
//	}
//	if (flag == 0)
//	{
//		printf("%.2lf\n", and);
//	}
//	else
//		printf("Wrong");
//	return 0;
//}

//int main()
//{
//	double a, b, ans;
//	char ch;
//	int flag = 0;
//
//	scanf_s("%lf %c %lf", &a, &ch, &b);
//
//	switch (ch)
//	{
//	case'+':
//		ans = a + b;
//		break;
//	case'-':
//		ans = a - b;
//		break;
//	case'*':
//		ans = a * b;
//		break;
//	case'/':
//		if (fabs(b) <= 1e-10)
//			flag = 1;
//		else
//			ans = a / b;
//		break;
//	default:
//		flag = 1;
//	}
//	if (flag == 0)
//		printf("%.2lf\n", ans);
//	else
//		printf("Wrong input!\n");
//	return 0;
//}

//double caul(double x, int y)
//{
//	int i = 0;
//	int count = 0;
//	double sum = 0.0;
//	for (i = x;; i--)
//	{
//		sum += x;
//		x = sqrt(x);
//		count++;
//		if (y == count)
//		{
//			break;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	double item;
//	int n;
//	scanf_s("%lf%d", &item, &n);
//	double sum = caul(item, n);
//	printf("%.2f\n", sum);
//	return 0;//                      1051
//}
//double kk(double d)
//{
//	int j = 0;
//	int k = 1;
//	for (j = 1; j <= d; j++)
//	{
//		k *= j;
//	}
//	return k;
//}
//double sinn(double x)
//{
//	int i;
//	double sum = 0;
//	double n = 1.0;
//	double m;
//	double b = x;
//	int a = -1;
//	for (i = 1; i <=10; i++)
//	{
//		sum += x;
//		n = n * b * b;
//	    m = kk(2 * i + 1);
//		x = a * n / m;
//		a = -a;
//	}
//	return sum;
//}
//int main()
//{
//	double x;
//	scanf_s("%lf", &x);
//	double len=sinn(x);
//	printf("%.3f\n", len);
//	return 0;//               1053
//}
//1036