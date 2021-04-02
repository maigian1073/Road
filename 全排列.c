//项目名称：C语言全排列问题
/* */ 
#include <stdio.h> 
#include <stdlib.h>//头文件，可提供一些函数与符号常量（常用系统函数）

int combine(int n, int m);//函数combine，参数分别表示对象的总数量和每一组合中对象的个数

int main(int argc, char* argv[])//argc是int类型，argc表示argv中存放string的个数
                               //argv可以理解成它是一个string数组
{
	combine(8, 5);//用combine函数提供所需排列要求，对象总量为8，每一组组合对象个数为5.
	return 0;
}

int combine(int n, int m)//从n个选m个，函数返回值为整型且参数类型皆为整型 
{
	int i, j, t;
	int* arr = (int*)malloc(sizeof(int) * n);//用来存储索引集合，malloc(),sizeof(int)表示申请元素的个数
	                                        //n表示元素单位长度

	if (m > n || m < 1)
	{
		return -1; //用if语句进行判断，确保n>=m>=1
	}

	for (i = 1; i <= n; i++)//填充索引
	{
		arr[i - 1] = i;
	}

	int* a = (int*)malloc(sizeof(int) * m);//用来存储每次算法产生的当前组合
	for (i = 0; i < m; i++)//第一种组合，a[0]=1,a[1]=2,...a[m-1]=m;
	{
		a[i] = i + 1;
	}

	for (j = m; a[0] <= (n - m + 1);)//当组合为最后一组时，循环结束；
		                            //即a[0]=n-m+1,...,a[m-1]=n;
		                           //j用来判断进位，以及进位之后的调整
	{

		for (; a[m - 1] <= n; a[m - 1]++)//最后一位不断递增，
			                            //直到达到最大值，产生进位
		{
			for (t = 0; t < m; t++)
			{
				printf("%d\t", arr[a[t] - 1]);

			}
			printf("\n");

		}

		for (j = m - 2; j >= 0; j--)//判断a[1]--a[m-2]是否有进位 
			                       //如果 a[m-1]>n 产生进位
		{
			a[j]++;
			if (a[j] <= (j + n - m + 1))//a[j]不进位,那么a[j-1]也不进位，结束继续判断
			{
				break;
			}
		}

		for (j++; j > 0 && j < m; j++)//调整，使得a[index-1],a[index],a[index]
			                         //顺序排列，其中a[index]产生进位
		{
			a[j] = a[j - 1] + 1;
		}
	}

	free(arr);
	free(a);

	getchar();//
	return 0;
}

