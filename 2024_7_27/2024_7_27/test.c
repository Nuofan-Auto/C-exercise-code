//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////typedef unsigned int uint;�����ͽ���������
////typedef void(*pf_t)(int);
////int main()
////{
////	//( *((void (*)())0 )()   ����0��ַ�����������
////	pf_t signal(int, pf_t); //����������
////	int i = (int)6.6;
////	printf("%d\n", i);
////	return 0;
////}
//
//
////����ָ�����;:����������������
//
////дһ��������
////�ӷ����������˷�������
////����֮��ֻ���ڲ�ͬ�����ĵ���->ʹ�ú���ָ��
//void menu()
//{
//	printf("**************************************\n");
//	printf("***********1��Add   2��Sub************\n");
//	printf("***********3��Mul   4��Div************\n");
//	printf("***********0��Exit        ************\n");
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
//	printf("������Ҫ�������������");
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
////		printf("�����룺");
////		scanf("%d", &input);
////		if (input == 0)
////		{
////			printf("�˳�\n");
////		}
////		else if (input >= 1 && input <= 4)
////		{
////			printf("����������Ҫ���������");
////			int x = 0;
////			int y = 0;
////			scanf("%d%d", &x, &y);
////			printf("%d\n", pf_arr[input](x, y));
////		}
////		else
////		{
////			printf("�����������������\n");
////		}
////		 
////	} while (input);
////	return 0;
////}
//
////����ָ������,�ֽ�ת�Ʊ�
////int main()
////{
////	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
////	int i = 0;
////	for (i = 0; i < 4; i++)
////	{
////		printf("%d ", arr[i](8, 4));
////	}
////	return 0;
////}
////ָ�򡾺���ָ�����顿��ָ��
////int main()
////{
////	int(*pf_arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
////	int(*(*ppf_arr)[5])(int, int) = &pf_arr;
////	return 0;
////}
//
////�ص�����
////����ָ����Ϊ�������Ҹ�ָ�뱻������������ָ��ĺ���->�ص�����
//
////�ص��������䰸��
////qsort:ʹ�ÿ�������˼��ʵ�ֵ�һ��������
////void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
////base Ҫ��������ݵ���ʼλ��
////num �����������Ԫ�صĸ���
////�����������Ԫ�صĴ�С����λ���ֽڣ�
////����ָ��-�ȽϺ���(�����ɹ���)
////�Ƚ���������Ԫ��
////e1ָ��һ������
////e2ָ��һ������
////(ָ�������e1>e2   return >0
////e1=e2  0   e1<e2  return <0
//#include <stdlib.h>//qsort��ͷ�ļ�
//int cmp(const void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//int main()
//{
//	int a = 10;
//	void* p = &a;//void*���޾������͵�ָ�룬���Խ����������͵�ָ��
//	//void*���޾������͵�ָ�룬���Բ��ܽ��н����ò���������Ȩ��δ֪����Ҳ���ܼӼ�����������δ֪)
//	int arr[10] = { 1,3,2,5,6,7,2,4,2,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);//qsort��4������
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
//	//�Ѵ���Add��Sub��Mul��Div�ĸ�����
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
	//����һ���������������
	int arr[10] = { 1,3,2,7,5,9,6,0,4,8 };
	//��������Ĵ�С
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʵ������ð������,����qsort����
	qsort(arr, sz, sizeof(arr[0]), cmp);
	//��ӡ����������Ԫ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}