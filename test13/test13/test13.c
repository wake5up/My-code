#define _CRT_SECURE_NO_WARNINGS 1
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5

//#include<stdio.h>
//#include<string.h>
//
//void Adjust_array(int str[10],int len)
//{
//	int i = 0;
//	int j = 0;
//	int left = 0;
//	int right = len-1;
//	int p[20] = {0};
//	for (j = 0; j < len; j++)
//	{
//		p[j] = str[j];
//	}
//	while (left <= right)
//	{
//		if (p[i] % 2 == 1)
//		{
//			str[left] = p[i];
//			i++;
//			left++;
//		}
//		else
//		{
//			str[right] = p[i];
//			i++;
//			right--;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ",str[i]);
//	}
//}
//int main()
//{
//	int str[9] = {1,2,3,4,5,6,7,8,9};
//	int len = sizeof(str) / sizeof(str[0]) ;
//	Adjust_array(str,len);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//
//int Find_num(int arr[][3],int n)
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (n == arr[i][j])
//				return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[3][3] = { { 1, 2, 3 }, { 2, 3, 4 }, {3,4,5} };
//	printf("请输入需要查找的数字:\n");
//	scanf("%d",&n);
//	int ret = Find_num(arr, n);
//	if (ret == 1)
//	{
//		printf("找到了！\n");
//	}
//	else
//	{
//		printf("没找到！\n");
//	}
//	system("pause");
//	return 0;
//}
