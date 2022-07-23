#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	while (a)
	{
		if (a % 2 == 1)
		{
			count++;
			a=a / 2;
		}
	}
	printf("%d", count);
	return 0;
}


//int brr(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')//这里面的end要用指针符号
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = brr(arr);
//	printf("%d", len);
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 1,2,3,4 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}