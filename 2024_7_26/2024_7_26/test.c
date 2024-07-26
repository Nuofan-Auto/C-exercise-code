#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char* p = "abcdef";//常量字符串，在内存中会开辟空间用以存储->只读区域
//	char* a = "a";
//	printf("%s\n", p);
//	return 0;
//}
//int main() 
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (strcmp(p1, p2) == 0)
//		printf("yes\n");
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { 0 };
//	if (*arr == arr[0])
//	{
//		printf("yes\n");
//	}
//	if (*arr == &arr[0][0])
//	{
//		printf("yes\n");
//	}
//	return 0;
//}
//int main()
//{
//	int main = 011;
//	printf("%d\n", main);
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	char arr2[5] = { 0 };
//	int(*p1)[10] = &arr1;//数组指针
//	char* (*p2)[5] = &arr2;
//	return 0;
//}
//
//void print1(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", p[i][j]);
//		    printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//void print2(int arr[][5],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////int main()
////{
////	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
////	print2(arr, 3, 5);
////	return 0;
////}
//int main()
//{
//	const char* p = "abcdef";
//	return 0;
//}
//
//int test(int* p)
//{
//	return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	test(arr);//形参实参类型不同
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;//数组指针
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//对于函数来说，&函数名和函数名都是函数的地址
//	int (*pf)(int,int) = &Add;//括号很重要，优先级的问题
//	     pf = Add;
//	int ret = (*pf)(2, 3);//函数的调用
//        ret = pf(2, 3);
//		ret = (*****pf)(4, 6);//这里写多少个*都无所谓，比较特殊
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int(*p)[4] = arr;//二维数组的每一行有4个元素，即一维数组的类型为int[4]
//	//用数组指针打印这个二维数组
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*pf)(int, int) = &Add;
	int ret = (*******pf)(4, 5);//这里写多少个*都可以，只是起一个注明作用，这点很有趣
	printf("%d\n", ret);
	return 0;
}
