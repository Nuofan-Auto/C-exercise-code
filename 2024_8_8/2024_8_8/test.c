#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define M 5
//ö������enumertation
//enum Day
//{
//	��Щ����ö�ٳ���
//	Mon,//Ĭ�ϴ�0��ʼ�����ε���1
//	Tues,//���������޸�
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
//���ϣ���ͬ�壩->����ͬһ���ڴ�ռ�
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
//	u.c = 1;//�����С�ˣ���1������ǳ�����
//	
//	return u.i;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//���������
//union Un
//{
//	char arr[5];//������Ϊ1,ʵ�����Ƿ���5��char 
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
//	printf("%zu\n", sizeof(union Un));//8���ֽڴ�С
//	printf("%zu\n", sizeof(union Unf));//4���ֽڴ�С
//	//ע����������
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
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;//�쳣����
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
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ��
//	free(p);
//	p = NULL;//����Ұָ��
//	return 0;
//}

//void* calloc(size_t num, size_t size);
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));//����10����СΪ4���ֽڵĿռ�
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
//    //����(�����ռ��С)
//	int* ptr =(int*) realloc(p, 80);
//	//���¿��ٿռ䲢����
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
//	int* p = realloc(NULL, 40);//�ȼ���malloc(40)
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