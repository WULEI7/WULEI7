#include <math.h>             /*程序要使用到数学库函数（sin函数）*/
#include <stdio.h>
main()                        /*main函数首部*/
{                             /*main函数体开始*/
   double x,s;                //定义两个实数变量，以被后面程序使用
   printf("input number:\n"); //显示提示信息
   scanf("%lf",&x);           /*从键盘获得一个实数x*/
   s=sin(x);                  /*求x的正弦，并把它赋给变量s*/
   printf("sine(%lf) = %lf\n",x,s); /*显示程序运算结果*/
}                         