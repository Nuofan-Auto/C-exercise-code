#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);
// 101
// 010
//
// 101
// 010
// 111
// 
//	00000000000000000000000000000011  3的补码
//	10000000000000000000000000000101
//	11111111111111111111111111111010
//	11111111111111111111111111111011  5的补码
//	00000000000000000000000000000011   得到3（非负整数的原反补相同）
//	%d  意味着打印一个有符号的整数
//	return 0;
//}
//int main()
//{
//	//加减法
//	int a = 5;
//	int b = 3;
//	a = a + b;//存在溢出的问题
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
////	int b = 5;
////	a = a ^ b;//不会产生进位，不存在溢出的问题
////	b = a ^ b;//只适用于整数，局限性
////	a = a ^ b;//可读性也不高
////	return 0;
////}110
//
////
//int main()
//{
//	int input = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &input);
//	//if (input < 0)
//	//{
//	//	input = -input;
//	//	count++;
//	//}
//	for (i = 0; i < 32; i++)
//	{
//		if ((input & 1) == 1)
//		{
//			count++;
//		}
//		input = input >> 1;
//	}
//	printf("%d\n", count);
//	printf("%d\n", 1 == 1);
//		return 0;
//}
////10000000000000000000000000000001
////11111111111111111111111111111111
//int main()
//{
//	int a = 13;  
//	a |= (1 << 1);
//	printf("%d\n", a);//补码按位取反
//	return 0;
//}   
//int main()
//{
//	time_t;
//	int a = (int)3.14;
//	int i = 10;
//	printf("%d\n",sizeof i);
//	return 0;
//
//
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;// 3^5
//	b = a ^ b;//3^5^5,即3^(5^5),得3，由此成功将a的值放到b中
//    a = a ^ b;//3^5^3,即(3^3)^5,得5，由此成功将b的值放到a中
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	char a = 5;// 存储的是补码，打印的是原码。我们自己用的是原码，看到的都是原码  
//	char b = 126;//字符型其实也归算在整型之类的
//	char c = a + b;
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(unsigned long));
//	printf("%zu\n", sizeof(long long));
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = ++a || b++ || ++c;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = (a++, ++a);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{                                      
//  	char a = 126;
//	char b = 6;  
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1 * 2 + 2 * 3 + 3 * 4;
//	int b = a + (--a);
//	return 0;
//}
int fib(int n)
{
	int a = 1;
	int b = 2;
	int c = 3;
	if (n <= 2)
	{
		return n;
	}
	while (n-2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[50] = { 0 };
//	int arr1[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	int j = 0;
//	scanf("%d", &del);
//	for (i = 0; i < n; i ++ )
//	{
////		if (arr[i] != del)
////		{
////			arr1[j] = arr[i];
////			printf("%d ", arr1[j]);
////			j++;
////		}
////	}
////	return 0;
////}
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int del = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//  
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;//这里的设置很关键
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}//输入时即进行判断，大大简化代码，避免代码的无意义重复
//	printf("%d\n", max - min);
//	return 0;
//
//	
//}
//int main()
//{
//	char a = 0;
//	char b = 0;
//	scanf("%c", &a);
//	scanf("%c", &b);
//	printf("%c %d", a, b);
//	return 0;
//} 
//int main()
//{
//	char ch = 0;
//	char sh = 0;
//	scanf("%c%c", &ch,&sh);
//	printf("%c\n", ch);
//	printf("%c\n", sh);
//	return 0;
////}
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if(ch<='Z'&&ch>='A')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	char ch = 'a';
//	//islower() isupper()  tolower() toupper()
//	if(islower(ch))
//	printf("%d\n", ch);
//	return 0;
//}
//%c的前面加空格，跳过下一个字符之前的所有空白字符  空格  \n  \t \r等等
////isalpha() 判断是否是字母
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum = (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//		return 0;
//}
//int main()
//{
//	int c = 0;
//	int a = 0;
//	scanf("%d",  &c);
//	printf("%d ", c);
//	return 0;
//}
//int main()
//{
//	float a = 1.0f;
//	printf("%f", a);
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int* pf = & a;
//	*pf = 200;
//	printf("%d\n", a);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char arr1[10] = { 0 };
//	printf("%d\n", arr - arr1);
//	return 0;
//}
//int main()
//{
//	while (getchar() != EOF)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int* test()
//{
//	int c = 4;
//	return &c;
//}
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	for(p=arr;p<arr+10;p++)//这是符合C语言标准的
	{
		printf("%d ", *p);
	}
	for (p = arr + 9; p > arr - 1; p--)//严格来说，这是不符合C语言标准的
	{
		printf("%d ", *p);
	}
	return 0;
}