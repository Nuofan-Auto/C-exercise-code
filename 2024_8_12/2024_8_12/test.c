#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//struct S
//{
//	char a : 1;//1
//	char b : 6;//001010
//	char c : 4;//0101
//	char d : 3;//011
//};
////0001 0101     0011 0101
//// 1     5       3    5 
//int main()
//{
//	struct S s = { 0 };
//	s.a = 1;//1
//	s.b = 10;//1010
//	s.c = 5;//101
//	s.d = 11;//1011
//	return 0;
//}

typedef enum Day
{
	Mon = 1,//1
	Tues,//2
	Wed,//3
	Thur = 5,//5
	Fri,//6
	Sat,//7
	Sun//8
}Day;

//#define MAX 7
//int main()
//{
//	printf("%zu\n",sizeof(Day));
//	return 0;
//}

union S
{
	char a;
	int c;
};

int main()
{
	float f = -1.0f;//1 8 23
	//1011 1111 1000  
	// BF  80  00  00
	return 0;
}