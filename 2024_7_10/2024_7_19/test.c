#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	printf("%d\n", c);
// 101
// 010
//
// 101
// 010
// 111
// 
//	00000000000000000000000000000011  3�Ĳ���
//	10000000000000000000000000000101
//	11111111111111111111111111111010
//	11111111111111111111111111111011  5�Ĳ���
//	00000000000000000000000000000011   �õ�3���Ǹ�������ԭ������ͬ��
//	%d  ��ζ�Ŵ�ӡһ���з��ŵ�����
//	return 0;
//}
//int main()
//{
//	//�Ӽ���
//	int a = 5;
//	int b = 3;
//	a = a + b;//�������������
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
////	int b = 5;
////	a = a ^ b;//���������λ�����������������
////	b = a ^ b;//ֻ������������������
////	a = a ^ b;//�ɶ���Ҳ����
////	return 0;
////}110
//
////
//int main()
//{
//	int input = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &input);
//	//if (input < 0)
//	//{
//	//	input = -input;
//	//	count++;
//	//}
//	for (i = 0; i < 32; i++)
//	{
//		if ((input & 1) == 1)
//		{
//			count++;
//		}
//		input = input >> 1;
//	}
//	printf("%d\n", count);
//	printf("%d\n", 1 == 1);
//		return 0;
//}
////10000000000000000000000000000001
////11111111111111111111111111111111
//int main()
//{
//	int a = 13;  
//	a |= (1 << 1);
//	printf("%d\n", a);//���밴λȡ��
//	return 0;
//}   
//int main()
//{
//	time_t;
//	int a = (int)3.14;
//	int i = 10;
//	printf("%d\n",sizeof i);
//	return 0;
//
//
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;// 3^5
//	b = a ^ b;//3^5^5,��3^(5^5),��3���ɴ˳ɹ���a��ֵ�ŵ�b��
//    a = a ^ b;//3^5^3,��(3^3)^5,��5���ɴ˳ɹ���b��ֵ�ŵ�a��
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	char a = 5;// �洢���ǲ��룬��ӡ����ԭ�롣�����Լ��õ���ԭ�룬�����Ķ���ԭ��  
//	char b = 126;//�ַ�����ʵҲ����������֮���
//	char c = a + b;
//	return 0;
//}
//int main()
//{
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(long double));
//	printf("%zu\n", sizeof(unsigned long));
//	printf("%zu\n", sizeof(long long));
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
// }
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = ++a || b++ || ++c;
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = (a++, ++a);
//	printf("%d", b);
//	return 0;
//}
//int main()
//{                                      
//  	char a = 126;
//	char b = 6;  
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 1 * 2 + 2 * 3 + 3 * 4;
//	int b = a + (--a);
//	return 0;
//}
int fib(int n)
{
	int a = 1;
	int b = 2;
	int c = 3;
	if (n <= 2)
	{
		return n;
	}
	while (n-2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[50] = { 0 };
//	int arr1[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	int j = 0;
//	scanf("%d", &del);
//	for (i = 0; i < n; i ++ )
//	{
////		if (arr[i] != del)
////		{
////			arr1[j] = arr[i];
////			printf("%d ", arr1[j]);
////			j++;
////		}
////	}
////	return 0;
////}
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int del = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//  
//int main()
//{
//	int arr[100] = { 0 };
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;//��������úܹؼ�
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}//����ʱ�������жϣ����򻯴��룬���������������ظ�
//	printf("%d\n", max - min);
//	return 0;
//
//	
//}
//int main()
//{
//	char a = 0;
//	char b = 0;
//	scanf("%c", &a);
//	scanf("%c", &b);
//	printf("%c %d", a, b);
//	return 0;
//} 
//int main()
//{
//	char ch = 0;
//	char sh = 0;
//	scanf("%c%c", &ch,&sh);
//	printf("%c\n", ch);
//	printf("%c\n", sh);
//	return 0;
////}
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if(ch<='Z'&&ch>='A')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	
//	return 0;
//}
//#include <ctype.h>
//int main()
//{
//	char ch = 'a';
//	//islower() isupper()  tolower() toupper()
//	if(islower(ch))
//	printf("%d\n", ch);
//	return 0;
//}
//%c��ǰ��ӿո�������һ���ַ�֮ǰ�����пհ��ַ�  �ո�  \n  \t \r�ȵ�
////isalpha() �ж��Ƿ�����ĸ
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int k = (int)pow(10, j);
//			sum = (i / k) * (i % k);
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//		return 0;
//}
//int main()
//{
//	int c = 0;
//	int a = 0;
//	scanf("%d",  &c);
//	printf("%d ", c);
//	return 0;
//}
//int main()
//{
//	float a = 1.0f;
//	printf("%f", a);
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int* pf = & a;
//	*pf = 200;
//	printf("%d\n", a);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char arr1[10] = { 0 };
//	printf("%d\n", arr - arr1);
//	return 0;
//}
//int main()
//{
//	while (getchar() != EOF)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int* test()
//{
//	int c = 4;
//	return &c;
//}
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	for(p=arr;p<arr+10;p++)//���Ƿ���C���Ա�׼��
	{
		printf("%d ", *p);
	}
	for (p = arr + 9; p > arr - 1; p--)//�ϸ���˵�����ǲ�����C���Ա�׼��
	{
		printf("%d ", *p);
	}
	return 0;
}