#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////冒泡排序法
//
////void buble_rank(int arr[], int x)
////{
////	int i = 0;
////	int j =0;	
////	for (i = 0; i < x - 1; i++) 
////	{
////		//int flag = 0;
////		for (j = 0; j < x - 1 - i; j++)
////		{
////			if(arr[j]>arr[j+1])
////			{
////				int tmp = 0;
////				tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////				//flag++;
////			}
////		}
////		/*if (flag == 1)
////		{
////			break;
////		}*/
////	}	
////}
////int main()
////{
////	int arr[] = { 6,10,3,7,9,1,4,5,2,8 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	buble_rank(arr,sz);
////	int i = 0;
////	for (i = 0; i<sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
//
////void reverse(int arr[], int x) 
////{
////	int i = 0;
////	for (i = 0; i < x-5 ; i++)
////	{
////		int tmp = 0;
////		tmp=arr[i];
////		arr[i] = arr[x-i-1];
////		arr[x-1-i] = tmp;		
////	}
////}
////
////void init(int arr[], int x)
////{
////	int i = 0;
////	for (i = 0; i < x ; i++)
////	{
////		arr[i] = 0;		
////	}
////}
////
////int main()
////{
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int i = 0;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	for (i = 0; i < sz ; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////	
////	reverse(arr, sz);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	printf("\n");
////	init(arr,sz);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
//
//int main()
//{
//	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[9] = { 11,12,13,14,15,16,17,18,19 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//		
//	}
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}	
//	printf("\n");
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d  ", arr2[i]);
////	}
////	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int Findnum(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        int j = 1;
//        for (j = 1 + i; j < sz; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                return arr[i];
//            }
//        }
//    }
//    return -1;
//}
//
//int main()
//{
//    int arr[] = { 3,1,0,2,5,3 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = Findnum(arr, sz);
//    printf("ret=%d\n", ret);
//    return 0;
//}

#include <stdio.h>

#define ROW 2
#define COL 2

int main()
{
    int n=2, m=2, k = 2, a, b ;
    char t = 'c';
    int i = 0;
    int j = 0;
    int arr[ROW][COL] = { {1,3},{6,8} };
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%c %d %d", &t, &a, &b);
            while (k--)
            {
                if (t == 'r')
                {
                    int tmp1 = arr[a - 1][0];
                    int tmp2 = arr[a - 1][1];
                    arr[a - 1][0] = arr[b - 1][0];
                    arr[a - 1][1] = arr[b - 1][1];
                    arr[b - 1][0] = tmp1;
                    arr[b - 1][1] = tmp2;
                }
                if (t == 'c')
                {
                    int tmp1 = arr[0][a - 1];
                    int tmp2 = arr[1][a - 1];
                    arr[0][a - 1] = arr[0][b - 1];
                    arr[1][a - 1] = arr[1][b - 1];
                    arr[0][b - 1] = tmp1;
                    arr[1][b - 1] = tmp2;
                }
                else
                {
                    ;
                }
            }
        }
    }
   
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}