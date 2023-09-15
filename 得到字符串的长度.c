#include<stdio.h>
int main() 
{
    int a[10];
    printf("数组的元素个数为：%d\n",sizeof(a)/4);//int型为4个字节
    printf("数组的长度为：%d",sizeof(a));
    return 0;
    //所以，要计算字符串的元素个数，可以放在数组中实现
    


}