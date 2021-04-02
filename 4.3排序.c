//项目名称：字符串排序
/* */ 
#include<stdio.h>// <stdio .h>头文件定义了三个变量类型、一些宏和各种函数来执行输入和输出。
                 //①库变量 ②库宏 ③库函数 
#include <stdlib.h>//<stdlib .h>头文件定义了四个变量类型、一些宏和各种通用工具函数。
#include <string.h>//之所以抛弃char*的字符串而选用C语言标准程序库中的<string.h>类，是因为他和前者比较起来，不必担心内存是否足够、字符串长度等等
                   //而且作为一个类出现，他集成的操作函数足以完成我们大多数情况下的需要。我们尽可以把它看成是C++的基本数据类型
                   //首先，为了在我们的程序中使用string类型，我们必须包含头文件 #include<string.h>
void bubblechar_sort(char b[], int n)//'void'在函数前使用时，可以显示指明，程序不处理函数返回值 
{ 
 int i, j; //定义两个整型变量i和j 
 char k; //定义字符型变量k 
 for(i = 0; i < n -1;i++) //使用for循环语句，进行对i的一系列操作 
 {  
  for( j = 0; j < n - 1 - i; j++)//使用for循环语句，进行对j的一系列操作 
  {     
   if(b[j]>b[j+1])//使用if判断语句，判断     
   {         
    k=b[j];          
    b[j]=b[j+1];          
    b[j+1]=k;     
   }  
  } 
 }
}
  
int StrBinarySearch(char A[], char c, int N)//调用函数 
{
  
    int Low, Mid, High;
    Low = 0; High = N - 1;
    while(Low <= High)
    {
        Mid = (Low + High) / 2;
        if(A[Mid] < c)
            Low = Mid + 1;
        else if(A[Mid] > c)
            High = Mid - 1;
        else
            return Mid; //Found
    }
    return -1;//Not Found: Return -1
}
 
int main()//调用无参构造函数 
{   
 printf("请输入英文单字个数\n");
 int a;//定义一个整型变量a 
 scanf("%d",&a);//使用scanf输入函数，输入a的值 
 char str[60];//定义一个60个数的一维数组 
 while(getchar() != '\n');//上面输入个数，回车换行，舍去换行符
 printf("请输入英文单字序列\n");//使用printf输出函数，输出'请输入英文单字序列' 
 for(int i = 0; i < a-1; i++)//使用for循环语句，进行对变量i的一系列操作 
 {
  scanf("%c",&str[i]);//使用scanf函数，输出字符串'str[i]' 
 }
 while(getchar() != '\n');//当 
 bubblechar_sort(str,a);//调用函数 
 printf("请输入你要查找的英文单字\n");
 char input;
 scanf("%c",&input);
 int result  = StrBinarySearch(str, input,a);
 if(result == -1)
  printf("没找到\n");
 else
  printf("找到了\n");
 printf("\n");
 system("pause");
 return 0;
}

