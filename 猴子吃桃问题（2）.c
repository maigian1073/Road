//项目名称：猴子吃桃问题（使用循环实现） 
//作者：肖阳 时间：2021年3月4号 
/*项目功能需求：有一只猴子第一天摘掉了若干桃子，当即吃掉了一半，觉得不过瘾又多吃了一个；第二天又将剩下的桃子吃掉了一半，
还不过瘾又多吃了一个；按照这个吃法，每天都要吃掉前一天剩下的一半又多一个。到了第十天，就剩下了一个桃子。
问：这只猴子第一天摘下了多少桃子？*/ 
/*知识点包括：①正向循环不行，采用逆向循环 ②熟悉变量的声明和使用  ③掌握循环结构的使用 ④掌握循环条件的起始条件和结束条件*/ 
/*算法思想：①为了让程序更加通用可以将主要算法部分作为一个函数来实现，intpeachcount（）函数返回第一天所摘下的桃子个数；
为了程序更加灵活，问题是第10天还剩下一个桃子，那如果问第n天还剩下一个桃子就需要重新修改程序 */
#include<stdio.h>/*包含头文件*/
int main( )/*定义主函数*/
{
	int x, n;/*定义整形变量*/
	x = 1;/*最后一天只剩了一个桃子*/
	for (n = 9; n >= 0; n--)
	{
		x = (x +1)*(x+1);
	}
	printf("第一天摘了%d个桃子", x);
}
/*从最后一天往前推，每天吃完根号y个桃子后又多吃一个*/

