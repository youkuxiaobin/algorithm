/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  二叉查找
 *
 *        Version:  1.0
 *        Created:  2015年03月02日 06时35分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  liyankun (), liyankun@baidu.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>

int BiSearch(int r[],int n,int key){
    int high,low,mid;
    low=0;
    high=n-1;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(key<r[mid])
            high=mid-1;
        else if(key>r[mid])
            low=mid+1;
        else
            return mid;
    }
    return -1;
}

