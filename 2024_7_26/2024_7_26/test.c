#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char* p = "abcdef";//�����ַ��������ڴ��лῪ�ٿռ����Դ洢->ֻ������
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
//	int(*p1)[10] = &arr1;//����ָ��
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
//	test(arr);//�β�ʵ�����Ͳ�ͬ
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int(*p)[5] = &arr;//����ָ��
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//	int (*pf)(int,int) = &Add;//���ź���Ҫ�����ȼ�������
//	     pf = Add;
//	int ret = (*pf)(2, 3);//�����ĵ���
//        ret = pf(2, 3);
//		ret = (*****pf)(4, 6);//����д���ٸ�*������ν���Ƚ�����
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int(*p)[4] = arr;//��ά�����ÿһ����4��Ԫ�أ���һά���������Ϊint[4]
//	//������ָ���ӡ�����ά����
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
	int ret = (*******pf)(4, 5);//����д���ٸ�*�����ԣ�ֻ����һ��ע�����ã�������Ȥ
	printf("%d\n", ret);
	return 0;
}
