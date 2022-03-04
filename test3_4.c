#include<stdio.h>

//int pick(int year)
//{
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int year, month;
//    scanf_s("%d %d", &year, &month);
//    int flag = pick(year);
//    switch (month)
//    {
//    case 1:
//        printf("31");
//        break;
//    case 2:
//        if (flag == 1)
//        {
//            printf("29");
//            break;
//        }
//        else
//        {
//            printf("28");
//        }
//        break;
//    case 3:
//        printf("31");
//        break;
//    case 4:
//        printf("30");
//        break;
//    case 5:
//        printf("31");
//        break;
//    case 6:
//        printf("30");
//        break;
//    case 7:
//        printf("31");
//        break;
//    case 8:
//        printf("30");
//        break;
//    case 9:
//        printf("30");
//        break;
//    case 10:
//        printf("31");
//        break;
//    case 11:
//        printf("30");
//        break;
//    case 12:
//        printf("31");
//        break;
//    }
//    return 0;//                  1036
//}
//#include<stdio.h>
//
//void test(int x)
//{
//    int tmp;
//    int base = 1;
//    tmp = x;
//    while (tmp > 9)
//    {
//        tmp /= 10;
//        base *= 10;
//    }
//    int a = 0;
//    while (base)
//    {
//        a = x / base;
//        x = x % base;
//        base /= 10;
//        printf("%d ", a);
//    }
//}
//int main()
//{
//    int idex;
//    scanf_s("%d", &idex);
//    test(idex);
//    return 0;//              1061
//}
