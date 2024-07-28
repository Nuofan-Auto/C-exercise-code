#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//qsort实现结构体排序
//完善bubble_sort函数


//struct stu
//{
//	char name[100];
//	int age;
//};
//int cmp_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//默认数组已经有序
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			    flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//void Swap(char* e1, char* e2,int width)
//{
//	assert(e1 && e2);
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = 0;
//		tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		if (i < width - 1)
//		{
//			e1++;
//			e2++;
//		}
//		
//	}
//}
//void bubble_sort_refined(void* base, int num, int width, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1;//默认数组已经有序
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int iarr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	struct stu arr[3] = { {"abcde",10},{"abcd",20},{"abc",30} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_by_age);
//	bubble_sort_refined(arr, sz, sizeof(arr[0]), cmp_by_name);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//	//bubble_sort(iarr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", iarr[i]);
//	}
//	return 0;
//}
//
//

//int main()
//{
//	char arr[] = { 'a','b','c' };
//	int c = 10;
//	char* p = "abcdef";
//	printf("%c\n", *(p + 1));
//	//printf("%d\n", strlen(arr));
//	//printf("%d\n", strlen(arr + 1));
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%zu\n", sizeof(arr[3]));
//	printf("%zu\n", sizeof(arr[0][3]));
//	printf("%d\n", arr[0][4]);
//	return 0;
//}


