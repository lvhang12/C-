#include <stdio.h>
void Fswitch(double *p1,double *p2);

int main()
{
    double a=4,b=20;
    double *p1,*p2;
    //printf("请输入两个数：");
   // scanf("%lf,%lf",&a,&b);
    p1=&a;
    p2=&b;
    if(a<b)
    {
        Fswitch(p1,p2);
    }
    printf("max=%lf,min=%lf",a,b);
    return 0;
     

}

void Fswitch(double *p1,double *p2)
{
    double temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}