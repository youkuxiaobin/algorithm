/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  插入排序
 *
 *        Version:  1.0
 *        Created:  2015年03月01日 19时26分40秒
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

void InsertSort(int arr[], int len)
{
    int temp;
    int j;
    for (int i=1; i<len; i++)
    {
        temp = arr[i];
        j = i-1;
        for (; j>=0 && temp < arr[j];j--)
        {
            arr[j+1] = arr[j];
        }
        
        arr[j+1] = temp;    
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
    InsertSort(arr, size);
    Logout(arr, size);
    return 0;
}

