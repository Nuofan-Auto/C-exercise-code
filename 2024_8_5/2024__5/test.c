#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memcpy(void* dest,const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy函数不用来处理重叠内存的数据拷贝
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//    my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//使用memmove进行重叠内存的数据拷贝

void* my_memmove(void* dest, const void* src, size_t num)
{
	//重新创建一个数组，这样的算法不够高明，存在内存空间的浪费
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//前->后
		while (num--)
		{
			*(char*)dest = *(char*)src;//一一对应
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//后->前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	return 0;
//}

//memcmp-内存比较
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3};
//	int ret = memcmp(arr1, arr2, 12);//字节一对一对进行比较
//	printf("%d\n", ret);
//	return 0;
//}

//memset-内存设置
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%s\n", (char*)memset(arr + 6, 'x', 3));
//	return 0;
//}

//  
//int main()
//{
//	float f = 10.0f;
//	//1.010*2^3  010000010010
//	int* pf = &f;
//	printf("%u\n", *pf);
//	return 0;
//}

//int main()
//{
//	int arr[2] = { 0 };
//	int* ptr = arr;
//	(*ptr)++;
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	int bit = 0;
//	scanf("%d", &input);
//
//	while (input)
//	{
//		int rpt = input % 10;
//		if (rpt % 2 == 1)
//		{
//			sum += (int)(1 * pow(10, bit));
//		}
//		input /= 10;
//		bit++;
//	}
//	printf("%d\n", sum);
//	return 0;
//} 

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int input = 0;
//	while (scanf("%d", &input) == 1)
//	{
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j < input; j++)
//			{
//				if (i + j >= input - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else 
//	{
//		price = price * 0.8 - flag * 50;
//	}
//
//	if (price < 0)
//		price = 0.0;
//	printf("%.2lf\n", price);
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)//穷举
//	{
//		if ((killer != 'a') + (killer == 'c') + 
//			(killer == 'd') + (killer != 'd') == 3)//转化成数学问题：数学建模
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if ((j == 0) || (i == j))
//			{
//				arr[i][j] = 1;
//			}
//			if ((i >= 2) && (j >= 1))
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0;i<10;i++)
//	{
//		int b = 9 - i;
//		while (b--)
//		{
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	char* ret = strstr(arr, "world");
//	printf("%s\n", ret);
//	return 0;
//}

char* my_strstr(const char* str1, const char* str2)
{
	//abbbcdef  bcd
	const char* ptr1 = str1;
	const char* ptr2 = str2;
	while (*str1)
	{
		while ((*str1 == *str2) && (*str2!='\0'))
		{
			str1++;
			str2++;
		}
		
		if (*str2 == 0)
		{
			return (char*)ptr1;
		}
		else
		{
			str2 = ptr2;
			str1 = ++ptr1;
		}
	}
	return NULL;
}
//int main()
//{
//	char arr[] = "abcdef";
//	char str[] = "abbbcdef";
//	char* ret_1 = my_strstr(arr, "bcd");
//	char* ret_2 = my_strstr(str, "bcd");
//	printf("%s\n", ret_1);
//	printf("%s\n", ret_2);
//	printf("%s\n", my_strstr(arr, "xxx"));
//	return 0;
//}

//int main()
//{
//	char arr[] = "tengxun@.qq.com";
//	char sep[] = "@.";
//	printf("%s\n", strtok(arr, sep));
//	printf("%s\n", strtok(NULL, sep));
//	printf("%s\n", strtok(NULL, sep));
//	printf("%s\n", strtok(NULL, sep));
//	return 0;
//}
