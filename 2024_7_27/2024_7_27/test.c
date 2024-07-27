//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////typedef unsigned int uint;对类型进行重命名
////typedef void(*pf_t)(int);
////int main()
////{
////	//( *((void (*)())0 )()   调用0地址处的这个函数
////	pf_t signal(int, pf_t); //函数的声明
////	int i = (int)6.6;
////	printf("%d\n", i);
////	return 0;
////}
//
//
////函数指针的用途:解决代码的冗余问题
//
////写一个计算器
////加法、减法、乘法、除法
////差异之处只在于不同函数的调用->使用函数指针
//void menu()
//{
//	printf("**************************************\n");
//	printf("***********1、Add   2、Sub************\n");
//	printf("***********3、Mul   4、Div************\n");
//	printf("***********0、Exit        ************\n");
//	printf("**************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void cal(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入要运算的两个数：");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
////int main()
////{
////	int input = 0;
////	int (*pf_arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
////	do
////	{
////		menu();
////		printf("请输入：");
////		scanf("%d", &input);
////		if (input == 0)
////		{
////			printf("退出\n");
////		}
////		else if (input >= 1 && input <= 4)
////		{
////			printf("请输入两个要运算的数：");
////			int x = 0;
////			int y = 0;
////			scanf("%d%d", &x, &y);
////			printf("%d\n", pf_arr[input](x, y));
////		}
////		else
////		{
////			printf("输入错误，请重新输入\n");
////		}
////		 
////	} while (input);
////	return 0;
////}
//
////函数指针数组,又叫转移表
////int main()
////{
////	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
////	int i = 0;
////	for (i = 0; i < 4; i++)
////	{
////		printf("%d ", arr[i](8, 4));
////	}
////	return 0;
////}
////指向【函数指针数组】的指针
////int main()
////{
////	int(*pf_arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
////	int(*(*ppf_arr)[5])(int, int) = &pf_arr;
////	return 0;
////}
//
////回调函数
////函数指针作为参数，且该指针被用来调用其所指向的函数->回调函数
//
////回调函数经典案例
////qsort:使用快速排序思想实现的一个排序函数
////void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
////base 要排序的数据的起始位置
////num 待排序的数据元素的个数
////待排序的数据元素的大小（单位是字节）
////函数指针-比较函数(可自由构造)
////比较两个整型元素
////e1指向一个整数
////e2指向一个整数
////(指向的数）e1>e2   return >0
////e1=e2  0   e1<e2  return <0
//#include <stdlib.h>//qsort的头文件
//int cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//int main()
//{
//	int a = 10;
//	void* p = &a;//void*是无具体类型的指针，可以接受任意类型的指针
//	//void*是无具体类型的指针，所以不能进行解引用操作（访问权限未知），也不能加减整数（步长未知)
//	int arr[10] = { 1,3,2,5,6,7,2,4,2,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);//qsort共4个参数
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	//已创建Add、Sub、Mul、Div四个函数
//	int (*pf_arr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", pf_arr[i](4, 4));
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	void* pi = &i;
//	printf("%d\n", *(int*)pi);
//	return 0;
//}

#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int main()
{
	//创建一个用于排序的数组
	int arr[10] = { 1,3,2,7,5,9,6,0,4,8 };
	//计算数组的大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	//实现升序冒泡排序,调用qsort函数
	qsort(arr, sz, sizeof(arr[0]), cmp);
	//打印排序后的数组元素
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}