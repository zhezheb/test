#include<stdio.h>

int main()
{
    int n;
    scanf_s("%d", &n);
    int i = 0;
    int arr[100] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    int tmp;
    int min = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[min] > arr[i])
        {
            tmp = min;
            min = i;
            i = tmp;
        }
    }
    printf("%d %d", arr[min], min);
    return 0;
}
