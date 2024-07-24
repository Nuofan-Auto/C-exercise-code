#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);//release版本的优化
//	return 0;//传参压栈   创建变量   注意区分
//}
//int main()
//{
//	int a = 0b01;
//	if (*(char*)&a)//char* 的访问权限 顺着该地址向后访问一个字节（低->高）
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);//%d打印signed int   要进行整型提升
//	return 0;
//}
//int main()
//{
//	char a = 128;// a中放置10000000
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
//	printf("%d\n", i + j);//按照补码的形式进行运算，再格式化为有符号整数
//	return 0;
//}
//#include <windows.h>
//int main()
//{
//	unsigned int i;//
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//包含在头文件<windows.h>中
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
//		a[i] = -1 - i;//-128-127  本质上是一个循环  用补码进行运算
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
//	if ((int)strlen("abc") - (int)strlen("abcdef") > 0)//strlen 的返回值类型是size_t  就是unsigned int
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}
////int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);//存在算术转换的情况，不过基本没差别
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
//	printf("%f\n", *pFloat);//两种类型的数据内存中的存储方式是截然不同的  
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
	int a = 1;//十六进制表示为0x00000001
	if (*(char*)&a == 1)
	//char*类型的指针变量解引用时只访问1个字节，所以只可能访问到0x00（大端）或者0x01（小端）
		return 1;//小端字节序存储返回1
	else
		return 0;//大端字节序存储返回0
}
int main()
{
	if (check_system())
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}
