//项目名称： 
#include<stdio.h>// <stdio .h>头文件定义了三个变量类型、一些宏和各种函数来执行输入和输出。
                 //①库变量 ②库宏 ③库函数
#include<iostream>// 头文件<iostream>定义了标准输入/输出流对象。包含了<iostream>也自动包含了<ios>、<streambuf>、<istream>、<ostream>和<iosfwd>。
                  //头文件<iostream>中的对象包括：
                  //①narrow characters(char)即窄字符：cin(standard input stream (object))、cout(standard output stream (object))、cerr(standard output stream for errors (object))、clog(standard output stream for logging (object))；
                  //②wide characters(wchar_t)即宽字符：wcin(standard input stream (wide) (object))、wcout(standard output stream (wide)  (object))、wcerr(standard output stream for errors  (wide)  (object))、wclog(standard output stream for logging (wide) (object))。
using namespace std;//定义函数 

int tot;

void f(int a[], int n, int m, int cur)// 
{
	
	if (cur == m - 1)
	{
		for (int i = n; i >= 1; i--)
		{
			tot++;
			for (int j = 0; j < cur; j++)
				cout << a[j] << " ";
			cout << i << endl;
		}
	}

	for (int i = n; i >= 2; i--)
						 
	{
		a[cur] = i;
		f(a, i - 1, m, cur + 1);
	}
}

int main()
{
	int a[100];
	int n, m;
	cout << "请输入n和k: ";
	cin >> n >> m;
	tot = 0;
	f(a, n, m, 0);
	cout << "组合数为：" << tot << endl;
	return 0;
}

