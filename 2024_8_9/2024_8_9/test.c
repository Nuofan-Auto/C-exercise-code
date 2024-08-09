#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	int* ptr = (int*)realloc(p, 400);
//	/*if (ptr != NULL)
//	{
//		p = ptr;
//	}*/
//	*p = 1;
//	return 0;
//}

//内存泄漏   
//void test()
//{
//	int* p = (int*)malloc(100);
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//	{
//		return;
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(40);
//}
//void test()
//{
//	char* ptr = NULL;
//	GetMemory(&ptr);//函数的传址调用
//	strcpy(ptr, "hello world");
//	printf(ptr);
//	free(ptr);
//	ptr = NULL;
//}
//int main()
//{
//	test();
//	return 0; 
//}

//int main()
//{
//	int* p = (int*)calloc(10,4);//开辟40字节的动态内存空间
//	//注意强制类型转换
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//讲错误码转换为错误信息并打印
//		return 1;//异常返回
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//操作开辟的40字节的动态内存
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	p = (int*)realloc(p,30);
//	return 0;
//}
//
//int main()
//{
//	
//	int* p = (int*)calloc(10,4);//开辟40字节的动态内存空间
//	//注意强制类型转换
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//讲错误码转换为错误信息并打印
//		return 1;//异常返回
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//操作开辟的40字节的动态内存
//	}
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//讲错误码转换为错误信息并打印
//		return 1;//异常返回
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	free(ptr);
//	ptr = NULL;
//	p = NULL;
//	return 0;
//}

int main()
{
	int* p = (int*)realloc(NULL, 40);
	free(p);//释放内存后，此时p即为野指针
	p = NULL;//置为空指针
	return 0;
}