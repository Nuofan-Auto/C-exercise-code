#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void reverse(char arr[])
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = strlen(arr) - 1;//注意这一步
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);//打印字符串
//	return 0;
//}
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(strlen(str+1)>=2)
//	    reverse(str + 1);
//	*(str + len - 1) = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++; right--;
//	if(left<right)
//	    reverse(arr, left , right);//这里次序很重要，次序不对，容易出错
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse(arr,left,right);
//	printf("%s\n", arr);
//	printf("%d\n", my_strlen("abcdef"));
//	return 0;
//}
//int DigitSum(unsigned int n)
//{
//	if(n>9)
//	    return DigitSum(n / 10) + n % 10;
//	else
//	    return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	
//	printf("%d\n", sum);
//	return 0;
//}
//double Pow(double n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1 / n * Pow(1 / n, -k-1);
//}
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//
//}
//#include <math.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	printf("%lf\n", pow(2, -3));
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,3,4,5,8 };
//	int arr2[] = { 1,4,5,6,7 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int c = 0;
//	int d = 0;
//	scanf("%d %d", &c,&d);
//	printf("%d\n", c);
//	return 0;
//}


int main()
{
	int arr1[2][2] = { 1,2,3,4 };//完全初始化
	printf("%p\n", &arr1[0][0]);
	printf("%p\n", &arr1[0][0]+1);
	printf("%p\n", arr1[0]);
	printf("%p\n", arr1[0]+1);
	return 0;
}
