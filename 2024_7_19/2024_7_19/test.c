#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针变量
//	int** ppa = &pa;//ppa是二级指针变量
//	**ppa = 20;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 10;
//	int* parr[10] = { &a,&b,&c };//指针数组，就是存放指针的数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}
//int main()
//{
//	//指针数组模拟实现二维数组
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 1,2,3,4 };
//	int* parr[2] = { arr1,arr2 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i]);//二维数组的形式
//		}
//		printf("\n");
//	}
//	return 0;
//}

//结构体
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int high;
//}p1,p2;//p1,p2是两个全局的结构体变量
//struct St
//{
//	struct Peo P;//结构体类型中包含一个结构体变量
//	int num;
//	float f;
//};//结构体的嵌套
//void print(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
//}
//int main()
//{
//	struct Peo p3 = { "张三","11111111","男",175};//结构体变量的创建
//	struct St s = { {"李四","222222","女",165},100,3.14f };//浮点数在内存中是不能精确存储的
//
//	printf("%s %s %s %d\n", p3.name, p3.tele, p3.sex, p3.high);
//	printf("%s %s %s %d %d %f\n", s.P.name, s.P.tele, s.P.sex, s.P.high, s.num, s.f);//结构体类型的访问
//
//	print(&p3);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int* pi = &i;//一级指针，存放整型变量i的地址
//	int** ppi = &pi;//二级指针，存放int*类型指针变量pi的地址
//	printf("%p\n", *ppi);
//	printf("%d\n", **ppi);
//	printf("%d\n", *pi);
//	return 0;
////}
//int main()
//{
//	int arr[2][2] = { 1,2,3,4 };
//	int arr1[2] = { 1,2 };
//	int arr2[2] = { 3,4 };//数组名代表数组首元素的地址
//	int* parr[2] = { arr1,arr2 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", *(*(arr+i)+j) );//写成解引用的形式其实比较复杂，不利于阅读
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
//void print2(struct Peo* p)//注意形参形式
//{
//	printf("%s %lf %d\n", p->name, p->height, p->age);
//}//拿到结构体变量的地址时，用箭头访问结构体变量中的内容
//
//int main()
//{
//	struct Peo p4 = { "张三",175.5,32 };
//	struct Peo p5 = { "李四",169.5,29 };
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
//	struct Peo p = { {7,17,95.0f},"张三",175.0,31 };
//	printf("%d %d %f %s\n", p.S.grade, p.S.number, p.S.mark, p.name);
//	return 0;
//}
//int main()
//{
//	printf("%c", 0xCCCC);
//	return 0;
//}
//电脑内存中都是用补码进行运算的，只不过呈现的形式是原码

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
//加减乘除无疑是操作原码的
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
//	ret = m ^ n;//按位异或操作符，相同为0，相异为1 
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
//	//获取奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}
//全局变量，静态变量都是放在静态区，不初始化，默认值为0；
//局部变量，放在栈区，不初始化，默认随机值   VS下为0xcc
//打印X
//获得月份天数

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
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//用数组存储是很巧妙的
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

