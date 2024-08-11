#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct S
//{
//	int age;
//	char name[20];
//	double grade;
//};

//内存向文件写
//int main()
//{
//	struct S s = { 18,"zhangsan",95.0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fprintf(pf, "%d %s %lf", s.age, s.name, s.grade);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//内存从文件读
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	fscanf(pf, "%d %s %lf", &s.age, &s.name, &s.grade);
//	printf("%d %s %lf", s.age, s.name, s.grade);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S a = { 19,"zhangsan",95.0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&a, sizeof(a), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S s = { 19,"29",95.0 };
//	struct S a = { 0 };
//	char buf[100] = "19 29 95.0";
//	/*sprintf(buf, "%d %s %lf", s.age, s.name, s.grade);
//	printf("%s\n", buf);*/
//	int c = sscanf(buf, "%d %s %lf", &a.age, a.name, &a.grade);
//	printf("%d %s %lf\n", a.age, a.name, a.grade);
//	printf("%d\n", c);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double grade;
//};
//int main()
//{
//	struct S s = { 0 };
//	struct S a = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	fscanf(pf, "%s %d %lf", s.name, &s.age, &s.grade);
//	fscanf(pf, "%s %d %lf\n", a.name, &a.age,&a.grade);
//	return 0;
//}

//int main()
//{
//	long a = 0;
//	printf("%ld\n", a);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	long c = ftell(pf);
//	printf("%ld\n", c);
//	fseek(pf, 1, SEEK_SET);
//	char a = fgetc(pf);
//	fseek(pf, -1, SEEK_END);
//	char b = fgetc(pf);
//	printf("%c %c", a, b);
//
//	rewind(pf);
//	c = ftell(pf);
//	printf("\n%d", c);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	char c;
	char a : 1;
};

int main()
{
	printf("%zu", sizeof(struct S));
	return 0;
}
