#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ�����
//	int** ppa = &pa;//ppa�Ƕ���ָ�����
//	**ppa = 20;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 10;
//	int* parr[10] = { &a,&b,&c };//ָ�����飬���Ǵ��ָ�������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	//ָ������ģ��ʵ�ֶ�ά����
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 1,2,3,4 };
//	int* parr[2] = { arr1,arr2 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i]);//��ά�������ʽ
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ṹ��
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1,p2;//p1,p2������ȫ�ֵĽṹ�����
//struct St
//{
//	struct Peo P;//�ṹ�������а���һ���ṹ�����
//	int num;
//	float f;
//};//�ṹ���Ƕ��
//void print(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
//}
//int main()
//{
//	struct Peo p3 = { "����","11111111","��",175};//�ṹ������Ĵ���
//	struct St s = { {"����","222222","Ů",165},100,3.14f };//���������ڴ����ǲ��ܾ�ȷ�洢��
//
//	printf("%s %s %s %d\n", p3.name, p3.tele, p3.sex, p3.high);
//	printf("%s %s %s %d %d %f\n", s.P.name, s.P.tele, s.P.sex, s.P.high, s.num, s.f);//�ṹ�����͵ķ���
//
//	print(&p3);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int* pi = &i;//һ��ָ�룬������ͱ���i�ĵ�ַ
//	int** ppi = &pi;//����ָ�룬���int*����ָ�����pi�ĵ�ַ
//	printf("%p\n", *ppi);
//	printf("%d\n", **ppi);
//	printf("%d\n", *pi);
//	return 0;
////}
//int main()
//{
//	int arr[2][2] = { 1,2,3,4 };
//	int arr1[2] = { 1,2 };
//	int arr2[2] = { 3,4 };//����������������Ԫ�صĵ�ַ
//	int* parr[2] = { arr1,arr2 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", *(*(arr+i)+j) );//д�ɽ����õ���ʽ��ʵ�Ƚϸ��ӣ��������Ķ�
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", *(*(parr+i)+j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//struct Peo
//{
//	char name[20];
//	double height;
//	int age;
//};
//void print1(struct Peo p)
//{
//	printf("%s %lf %d\n", p.name, p.height, p.age);
//}
//void print2(struct Peo* p)//ע���β���ʽ
//{
//	printf("%s %lf %d\n", p->name, p->height, p->age);
//}//�õ��ṹ������ĵ�ַʱ���ü�ͷ���ʽṹ������е�����
//
//int main()
//{
//	struct Peo p4 = { "����",175.5,32 };
//	struct Peo p5 = { "����",169.5,29 };
//	print1(p4);
//	print2(&p4);
//	return 0;
//}



//struct St
//{
//	int grade;
//	int number;
//	float mark;
//};
//struct Peo
//{
//	struct St S;
//	char name[20];
//	double height;
//	int age;
//};
//
//int main()
//{
//	struct Peo p = { {7,17,95.0f},"����",175.0,31 };
//	printf("%d %d %f %s\n", p.S.grade, p.S.number, p.S.mark, p.name);
//	return 0;
//}
//int main()
//{
//	printf("%c", 0xCCCC);
//	return 0;
//}
//�����ڴ��ж����ò����������ģ�ֻ�������ֵ���ʽ��ԭ��

//int count_num_of_1(unsigned int num)
//{
//    int n = 0;
//    while(num)
//    {
//        if (num % 2 == 1)
//        {
//            n++;
//        }
//        num /= 2;
//    }
//    return n;
//}
//int count_num_of_1(int num)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((num >> i) & 1) == 1)
//        {
//            n++;
//        }
//    }
//    return count;
//}
//�Ӽ��˳������ǲ���ԭ���
//int count_num_of_1(int num)
//{
//    int count = 0;
//    while (num)
//    {
//        count++;
//        num = num & (num - 1);
//    }
//    return count;
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);  
//    int n = count_num_of_1(num);
//    printf("%d\n", n);
//    return 0;
//}
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m>>i)&1)!=((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_diff_bit_P(int m ,int n)
//{
//	int ret = 0;
//	int count = 0;
//	ret = m ^ n;//��λ������������ͬΪ0������Ϊ1 
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//��ȡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}
//ȫ�ֱ�������̬�������Ƿ��ھ�̬��������ʼ����Ĭ��ֵΪ0��
//�ֲ�����������ջ��������ʼ����Ĭ�����ֵ   VS��Ϊ0xcc
//��ӡX
//����·�����

//int is_leap_year(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//������洢�Ǻ������
//	while (scanf("%d%d", &year, &month) == 2)
//	{
//		day = days[month];
//		if (is_leap_year(year) && (month == 2))
//		{
//			day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while(scanf("%d",&n)==1)
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if ((i == j) || (i + j == n - 1))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

