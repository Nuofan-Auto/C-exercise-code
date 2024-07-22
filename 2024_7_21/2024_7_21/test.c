#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;//数组越界访问   栈区的内存分配方式
//		printf("hehe\n");
//	}
//	return 0;
//}
//void my_strcpy(char* dest, char* sour)
//{
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	*dest = *sour;//这样写代码，虽然好理解，但不够简洁，太啰嗦
//}
//int main()
//{
//	const int num = 10;//const 修饰的常变量
//	int* p = &num;
//	*p = 20;
//	return 0;
//}
//



#include <assert.h>
//void my_strcpy(char* dest,const char* sour)//const 修饰*sour
//{
//	//断言
//	assert(sour != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//}
//为什么要写成char*
//为了实现链式访问
//char* my_strcpy(char* dest,const char* sour)//const 修饰*sour
//{
//	断言
//	assert(sour != NULL);
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *sour++);
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	char* arr2 = NULL;
//	strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1, arr2));//实现了函数的链式访问，非常方便简洁
//	return 0; 
//}

//int main()
//{
//	int i = 0;
//	while (i++);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit!";//arr1中要放得下，否则会出现溢出的问题
//	printf("%s\n", strcat(arr1, arr2));
//	/*strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//	return 0;
////}  
//int main()
//{
//	int b = 0;
//	char arr[] = "hello";
//	*arr = 'h';
//	return 0;
//}

