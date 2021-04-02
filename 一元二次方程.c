//项目名称：一元二次方程
/* */ 
#include<stdio.h>//<stdio .h>头文件定义了三个变量类型、一些宏和各种函数来执行输入和输出。
                 //①库变量 ②库宏 ③库函数 
#include<math.h>//函数库<math.h>，里面包含大量数学函数，<math.h>的每一个函数都能接受定义域内的所有参数值，对于其他所有的参数都报告定义域错误。
                //发生定义域错误时，errno设置为EDOM。如果输入的不是数字，那么函数返回一个表示非数字的特殊编码
int main(void)
{
	float a,b,c;//定义浮点型变量：a，b，c 
	float delta,x1,x2;//定义浮点型变量delta，x1，x2 
	printf("请依次输入一元二次方程的三个系数：\n");//使用printf输出函数，输出'请依次输入一元二次方程的三个系数'并换行 
	scanf("%f %f %f",&a,&b,&c);//使用scanf输入函数，依次输入a，b，c的值 
	delta=b*b-4*a*c;//计算delta，delta等于b的平方减去4乘以a乘以c 
	printf("请稍等，正在为您解方程...\n");//使用printf输出函数，输出'请稍后，正在为您解方程...'并换行 
	if(delta>0)//使用判断语句if，判断delta是否大于0 
	{//若delta大于0 
		printf("该方程有两个不同实根\n");//使用printf输出函数，输出'该方程有两个不同实根'并换行 
		x1=(-b+sqrt(delta))/(2*a);//为x1赋值，计算负b加上根号delta的和除以2乘以a的积 
		x2=(-b-sqrt(delta))/(2*a);//为x2赋值，计算b加上根号delta的和除以2乘以a的积 
		printf("x1=%f,x2=%f",x1,x2);//使用printf输出函数，输出浮点型变量x1和x2的值 
	}
	else if(delta==0)//使用判断语句if，判断 
	{
		printf("该方程有唯一解\n");
		x1=(-b)/(2*a);
		x2=x1;
		printf("x1=x2=%f",x1);
	}
	else
	{
		printf("无解\n");
	}
	return 0;
}
