/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  快排函数
 *
 *        Version:  1.0
 *        Created:  2015年03月01日 19时37分06秒
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
using namespace std;
void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}
/*
 *  * 快速排序的分区函数
 *   */
int partition(int a[], int start, int end)
{
    int partion = a[end];
    int i = start - 1;
    for (int j = start; j <= end-1; j++)
    {
        if (a[j] < partion)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[end]);
    return i+1;

}
void quicksort(int a[], int start, int end)
{
    if (start < end)
    {
        int q = partition(a, start, end);
        quicksort(a, start, q-1);
        quicksort(a, q+1, end);
    }
}
void output(int a[], int count)
{
    for (int i = 0; i< count; i++)
    {
        cout<<"array["<<i<<"] = "<<a[i]<<endl;
    }
}
int main(int argc, char** argv)
{
    int a[] = {2, 8, 7, 1, 3, 5, 6, 4};
    int count = sizeof(a)/sizeof(a[0]);
    cout<<"sort before"<<endl;
    output(a, count);
    quicksort(a, 0, count -1);
    cout<<"sort after"<<endl;
    output(a, count);

    return 0;
}

