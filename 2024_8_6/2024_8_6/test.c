#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>//��offsetof��ͷ�ļ�

//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = (int)strlen(arr);
//	k %= len;
//	//ѭ��k��,ÿ��ʵ��һ���ַ�������
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//
//}

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_rotate(char arr[], int k)
//{
//	int len = (int)strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//ͨ���ṹ��ʵ�ֶ�ֵ�ķ���
//��Ȼ����ָ��Ҳ����ʵ��ֵ�Ĵ���
//struct Point find_num_1(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	struct Point p = { -1,-1 };
//	while (x <= r - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if(k>arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}
// �����Ͳ���
//int find_num_2(int arr[3][3], int* pa, int* pb, int k)
//{
//	int x = 0;
//	int y = *pb- 1;
//	while (x <= *pa - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			*pa = x;
//			*pb = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	int a = 3;
//	int b = 3;
//	scanf("%d", &k);
//	//struct Point ret = find_num_1( arr, 3, 3, k);
//	int ret = find_num_2(arr, &a, &b, k);
//	//printf("%d %d\n", ret.x,ret.y);
//	if (ret == 1)
//	{
//		printf("%d %d", a, b);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int is_left_move(char arr1[], char arr2[])
//{
//	int len =(int)strlen(arr1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		reverse(arr1 + 1, arr1+ len - 1);
//		reverse(arr1, arr1 + len - 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	//�ж�arr2�е��ַ����ǿ���ͨ��arr1�е��ַ�����ת�õ�
//    int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("ok\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}

//Ѱ���ִ�
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = (int)strlen(arr1);
//	int len2 = (int)strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	strncat(arr1, arr1, len1);
//	if (strstr(arr1, arr2) != NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;//��
//	int m = 0;//��
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//��ӡ����
//	//for (i = 0; i < m; i++)
//	//{
//	//	//��ӡһ��
//	//	for (j = 0; j < n; j++)
//	//	{
//	//		printf("%d ", arr[j][i]);
//	//	}
//	//	//һ�д�ӡ�����
//	//	printf("\n");
//	//}
//	/*for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//		{
//			printf("%d \n",arr[j][i]);
//		}
//	}*/
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	
//	int flag = 1;//�������Ǿ���
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)//�������������
//		{
//			if ( arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;//������ѭ��
//			}
//		}
//	}
//
//    end:
//
//	if (flag)
//	{
//		printf("�������Ǿ���\n");
//	}
//	else
//	{
//		printf("���������Ǿ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int flag1 = 0;//�������
//	int flag2 = 0;//��ǽ���
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		//�����ͬʱ���бȽ�
//		if (i > 0)
//		{
//			if (arr[i] >arr[i - 1])
//			{
//				flag1 = 1;
//			}
//			else
//			{
//				flag2 = 1;
//			}
//		}
//	}
//	if (flag1 + flag2 <= 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}



//�ṹ���������
//struct Node
//{
//	int data;
//	struct Node next;
//};
//���������ǲ��е�

//��ȷ�Ľṹ�������÷�ʽ
//struct Node
//{
//	int data;//������
//	struct Node* next;//��ַ��
//};

//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan",20 };
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, i));
//	printf("%d\n", offsetof(struct S2, c2));
//	return 0;
//}

#pragma pack(4)//����Ĭ�϶�����Ϊ4
struct S
{
	int i;
	double d;
};
#pragma pack(1)//��ʱ��Ч�ڲ�����
struct S1
{
	char c1;
	char c2;
	int i;
};
#pragma pack()//���ö�����ΪĬ�϶�����8
int main()
{
	printf("%d\n", sizeof(struct S));
	return 0;
}