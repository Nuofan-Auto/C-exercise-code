#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define M 5
//枚举类型enumertation
//enum Day
//{
//	这些都是枚举常量
//	Mon,//默认从0开始，依次递增1
//	Tues,//可以主动修改
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day d = Fri;
//	int m = M;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", d);
//	return 0;
//}
//
//
//联合（共同体）->共用同一块内存空间
//
//union Un
//{
//	int a;//4
//	char c;//1
//};
//
//int main()
//{
//	union Un u;
//	printf("%zu\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//	return 0;
//}
//
//
//int check_sys()
//{
//	int i = 1;
//	return *(char*)&i;
//}
//int check_sys()
//{
//	union
//	{
//		char i;
//		int c;
//	}u;
//	u.c = 1;//检验大小端，用1来检验非常巧妙
//	
//	return u.i;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//联合体对齐
//union Un
//{
//	char arr[5];//对齐数为1,实质上是放了5个char 
//	int i;
//};
//
//union Unf
//{
//	char arr1;
//	char arr2;
//	char arr3;
//	char arr4;
//	char arr5;
//	int i;
//};
//int main()
//{
//	printf("%zu\n", sizeof(union Un));//8个字节大小
//	printf("%zu\n", sizeof(union Unf));//4个字节大小
//	//注意区分两者
//	return 0;
//}

#include <errno.h>
#include <string.h>
#include <stdlib.h>

//void* malloc(size_t size);
//void free(void* memblock);


//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存开辟
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//异常返回
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间的
//	free(p);
//	p = NULL;//避免野指针
//	return 0;
//}

//void* calloc(size_t num, size_t size);
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//开辟10个大小为4个字节的空间
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//void *realloc( void *memblock, size_t size )
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
//    //扩容(调整空间大小)
//	int* ptr =(int*) realloc(p, 80);
//	//重新开辟空间并拷贝
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//等价于malloc(40)
//	return 0;
//}

//struct
//{
//	char name[20];
//	int age;
//}p1;
//
//struct
//{
//	char name[20];
//	int age;
//}p2;
//struct Peo
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	p1 = p2;
//	return 0;
//}

struct Peo
{
	int b;
	char a;
};
int main()
{
	printf("%zu\n", sizeof(struct Peo));
	return 0;
}