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

//�ڴ�й©   
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
//	GetMemory(&ptr);//�����Ĵ�ַ����
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
//	int* p = (int*)calloc(10,4);//����40�ֽڵĶ�̬�ڴ�ռ�
//	//ע��ǿ������ת��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//��������ת��Ϊ������Ϣ����ӡ
//		return 1;//�쳣����
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//�������ٵ�40�ֽڵĶ�̬�ڴ�
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
//	int* p = (int*)calloc(10,4);//����40�ֽڵĶ�̬�ڴ�ռ�
//	//ע��ǿ������ת��
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//��������ת��Ϊ������Ϣ����ӡ
//		return 1;//�쳣����
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//�������ٵ�40�ֽڵĶ�̬�ڴ�
//	}
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//��������ת��Ϊ������Ϣ����ӡ
//		return 1;//�쳣����
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
	free(p);//�ͷ��ڴ�󣬴�ʱp��ΪҰָ��
	p = NULL;//��Ϊ��ָ��
	return 0;
}