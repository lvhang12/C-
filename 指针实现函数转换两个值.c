#include <stdio.h>
void Fswitch(double *p1,double *p2);

int main()
{
    double a=4,b=20;//a,b初始化后，就有了自己的唯一地址
    double *p1,*p2;
    //printf("请输入两个数：");
   // scanf("%lf,%lf",&a,&b);
    p1=&a;//p1指向a的地址
    p2=&b;//p2指向b的地址
    if(a<b)
    {
        Fswitch(p1,p2);//转换p1,p2所指向的地址，转换后，p1指向b的地址，p2指向b的地址
    }
    printf("max=%lf,min=%lf",a,b);//输出的必须为a,b的值，因为自始至终，p1，p2都是一个地址，不是具体的值
    return 0;
     

}

void Fswitch(double *p1,double *p2)
{
    double temp=0;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}