#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
//
//char* GetMemory()
//{
//	char* p = "abcdef";//常量字符串是可以的
//	return p;
//}
//void test()
//{
//	char* p = NULL;
//	p = GetMemory();
//	printf(p);
//}
//int main()
//{
//	test();
//	return 0;
//}

//int find_max(int n, int m)
//{
//	while (n % m)
//	{
//		n = m;
//		m = n % m;
//	}
//	return m;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int max = find_max(n, m);
//		int min = n * m / max;
//		printf("%d\n", max + min);
//	}
//	return 0;
//}   
//
//int main()
//{
//	printf("%zu", sizeof(long));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(44);
//	assert(ps);
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, 84);
//	if(ptr != NULL)
//	{
//		ps = ptr;
//		ptr = NULL;
//	} 
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	if (ps->arr == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	free(ps);//要进行多次动态内存释放
//	ps = NULL;
//	return 0;
//}

//二者相比之下，选择柔性数组更好

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("C:\\Users\\11064\\Desktop\\test.txt", "r");//绝对路径
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));  
//		return 1;
//	}
//
//
//
//	fclose(pf);//关闭文件
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读字符
//	/*int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);*/
//	int ch = 0;
//	while ((ch=fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//写一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = fputs("abcdef\n", pf);
//	int j = fputs("hijklm\n", pf);
//	printf("%d %d", i,j);
//	return 0;
//}


//读一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[100] = { 0 };
//	fgets(arr, 5 , pf);
//	printf("%s\n", arr);
//	return 0;
//}
