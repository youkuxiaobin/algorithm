/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  冒泡排序算法
 *
 *        Version:  1.0
 *        Created:  2015年03月01日 17时44分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  liyankun (), liyankun@baidu.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <string.h>
using namespace std;

#define LOGDBG(fmt, args...) do {\
    printf("[%s:%d]%s   "fmt"\n", __FILE__, __LINE__, __FUNCTION__, ##args);\
}while(0);

#define LOGERR(fmt, args...) do {\
    printf("[%s:%d]%s   "fmt"(%s)\n", __FILE__, __LINE__, __FUNCTION__,  ##args, strerror(errno));\
}while(0);

void BubbleSort(int arr[], int len)
{
    int temp;
    for (int i=0; i<len ;i++)
    {
        for (int j=1; j<len -i;j++)
        {
            if (arr[j-1]>arr[j])
            {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void Logout(int arr[], int len)
{
    for (int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main(int argc, char** argv)
{
    int arr[] = {1,20,12,32,44,22,54,223,3,4,56,787};
    int size = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, size);
    Logout(arr, size);
    return 0;
}
