#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);//release�汾���Ż�
//	return 0;//����ѹջ   ��������   ע������
//}
//int main()
//{
//	int a = 0b01;
//	if (*(char*)&a)//char* �ķ���Ȩ�� ˳�Ÿõ�ַ������һ���ֽڣ���->�ߣ�
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);//%d��ӡsigned int   Ҫ������������
//	return 0;
//}
//int main()
//{
//	char a = 128;// a�з���10000000
//	printf("%d\n", a);
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	int i = -20; // 10000000000000000000000000010100
//	             // 11111111111111111111111111101100
//	             // 00000000000000000000000000001010
//	             // 11111111111111111111111111110110
//	             // 10000000000000000000000000001001
//	             // 10000000000000000000000000001010
//	unsigned int j = 10;
//
//	printf("%d\n", i + j);//���ղ������ʽ�������㣬�ٸ�ʽ��Ϊ�з�������
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	unsigned int i;//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//������ͷ�ļ�<windows.h>��
//	}
//	return 0;
//}

//int main()
//{
//	printf("%c", -3);
//}
//01111111
//11111111111111111111111111111111
//10000000000000000000000010000000
//01111111  
//01111111 
//10000000000000000000000010000001
//11111111111111111111111101111110
//11111111111111111111111101111111
//01111111-127

//int main()  
//{
//	char a[1000];
//	int i;
//
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-128-127  ��������һ��ѭ��  �ò����������
//	}
//	//128-127  255-0 	 0-254
//	printf("%d", strlen(a));
//}
//int main()
//{
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//int main()
//{
//	if ((int)strlen("abc") - (int)strlen("abcdef") > 0)//strlen �ķ���ֵ������size_t  ����unsigned int
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}
////int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//��������ת�����������������û���
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);
//	*pFloat = 9.0f;
//	printf("%d\n", n);
//	printf("%f\n", *pFloat);//�������͵������ڴ��еĴ洢��ʽ�ǽ�Ȼ��ͬ��  
//	return 0;
//}

//int main()
//{
//	char a = 127;
//	char b = a + 1;
//	char c = b + 1;
//	char d = c - 2;
//	printf("%d %d %d %d\n", a,b,c,d);
//	return 0;
//}
//int main()
//{
//	unsigned char a = 255;
//	unsigned char b = a + 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}
//
int check_system()
{
	int a = 1;//ʮ�����Ʊ�ʾΪ0x00000001
	if (*(char*)&a == 1)
	//char*���͵�ָ�����������ʱֻ����1���ֽڣ�����ֻ���ܷ��ʵ�0x00����ˣ�����0x01��С�ˣ�
		return 1;//С���ֽ���洢����1
	else
		return 0;//����ֽ���洢����0
}
int main()
{
	if (check_system())
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}
