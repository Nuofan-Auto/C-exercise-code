#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//int main()
//{
//	size_t i = 10;
//	printf("%zu\n", i);
//	return 0;
//}

//���Ȳ������Ƶ��ַ���������strcmp��strcpy��strcat ����Ǳ��������
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

char* my_strcpy(char* dest,const char* src)
{
	assert(dest && src);
	char* start = dest;
	while (*dest++ = *src++);//���������˳��Ū���
	return start;
}
//int main()
//{
//	char p[] = "abcdef";
//	char arr[] = "bit";
//	printf("%s\n",my_strcpy(p, arr));//Ŀ�����򲻿ɱ��޸�
//	return 0;
//}

char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++);
	return ret;
}
//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, "world");//���ܹ��Լ����Լ�׷��
//	printf("%s\n", arr1);
//	return 0;
//}

int my_strcmp(const char* ptr1,const char* ptr2)
{
	assert(ptr1 && ptr2);
	while((*ptr1 == *ptr2) && (*ptr1 !='\0'))
	{
		ptr1++;
		ptr2++;
	} 
	return (*ptr1 - *ptr2);
} 

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

//���������Ƶ��ַ�������
//strncpy  strncat  strncmp
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "bitter";
//	strncpy(arr1, arr2, 3);//������һ����Լ��  ����������  ������׷��\0
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//���Զ�׷��һ��\0
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcde";
//	char arr2[10] = "abcde";
//	int ret = strncmp(arr1, arr2, 7);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr  �����ִ���һ������
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while ((*s1 == *s2)&&(*s1!='\0')&&(*s2 != '\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	return NULL;
}
   
//int main()
//{
//	char email[] = "bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//} 

//strtok  �и��ַ���

//int main()
//{
//	const char* sep = "@.";//�ָ������ַ�����   
//	char email[] = "wunuofan@qq.com";//���и���ַ���
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//	/*char* ret = strtok(cp, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);*/
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))//forѭ��д�ǳ�����
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror ��������ת������Ӧ�Ĵ�����Ϣ

//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	return 0;
//}

//�ַ����ຯ��
//islower isupper isalpha isalnum isspace isdigit
//�հ��ַ� \n \t \v \r \f  ' '

//int main()
//{
//	int a = isdigit(' ');
//	printf("%d\n", a);
//	return 0;
//}

//�ַ�ת������ toupper tolower
//int main()
//{
//	printf("%c\n", tolower('a'));
//	return 0;
//}

//�ڴ溯��
//memcpy-�ڴ濽��

void* my_memcpy(void* dest, void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}
//memcpy ���𿽱���������ռ��е����� ���ܽ����ص��ڴ�Ŀ���
//�ص��ڴ�Ŀ���  memmove
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 28);//�����strcpy���߱�ͨ����
//	return 0;
//}

//int main()
//{
//	char str1[] = "abcd";
//	char str2[] = "abc";
//	int ret = strncmp(str1, str2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "bit";
//	char* ret = strncpy(str1, str2, 3);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char str1[20] = "hello\0xxxxxxxx";
//	char str2[] = "world goodbye";
//	printf("%s\n", strncat(str1, str2, 5));
//	return 0;
//}

int main()
{
	printf("%c\n", toupper('a'));
	return 0;
}