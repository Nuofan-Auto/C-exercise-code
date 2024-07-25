#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	float f = 5.5f;
//	return 0;
//}
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0; 
//	int right = sz-1;
//	while (left < right)
//	{
//		while (left<sz/2 && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (right>=sz/2 && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left--;
//			right++;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	move_odd_even(arr, sz);//数组和数组的大小
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void Bubble_sort(int arr[], int sz)
//{
//    //5 4 3 2 1    4 3 2 1 5
//    int i = 0;
//    int j = 0;
//    for (j = 0; j < sz - 1; j++)
//    {
//        for (i = 0; i < sz - 1 - j; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                int tmp = 0;
//                tmp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int i = 0;
//    int arr[1000] = { 0 };
//    scanf("%d%d", &m, &n);
//    int sz = m + n;
//    for (i = 0; i < m + n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    Bubble_sort(arr, sz);
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int j = 0;//遍历arr1
//	int k = 0;//遍历arr2
//	while (j < m && k < n)
//	{
//		if (arr1[j] > arr2[k])
//		{
//			printf("%d ", arr2[k++]);
//		}
//		else
//		{
//			printf("%d ", arr1[j++]);
//		}
//	}
//	if (j < m)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < n; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = -0;
//	printf("%d", i);
//	return 0;
//}