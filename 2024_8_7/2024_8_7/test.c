#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);//����ָ��ǿ�
//	char* ret = dest;//��ȡ����ֵ
//	while (count--)//���ƿ����ֽ���
//	{
//		*(char*)dest = *(char*)src;//�����ڴ濽��
//		//��ַ�ƶ�
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello WORLD";
//	char arr2[] = "HELLO";
//	char* ret = my_memcpy(arr1, arr2, 5);
//	printf("%s\n", ret);
//	return 0;
//} 
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	char* ret = dest;
//	if (src <= dest)
//	{
//		while (num)
//		{
//			*((char*)dest+num-1) = *((char*)src+num-1);
//			num--;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";//hehello
//	char arr2[] = "world";
//	memmove(arr1 + 2, arr1, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//�ṹ��ʵ��λ��
//λ��ֻ���ڽṹ����ʹ��
struct S
{
	int data[1000];
	int num;
};

struct A
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
//47bit
//6byte - 48bit
//8byte - 64bit
int main()
{
	//printf("%zu\n", sizeof(struct A));//3���ֽ�
	//һ���ֽڶ���û�д�С�˵�����
	struct A s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	char a = 1;
	return 0;
}
