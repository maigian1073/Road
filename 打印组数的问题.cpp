//��Ŀ���ƣ� 
#include<stdio.h>// <stdio .h>ͷ�ļ������������������͡�һЩ��͸��ֺ�����ִ������������
                 //�ٿ���� �ڿ�� �ۿ⺯��
#include<iostream>// ͷ�ļ�<iostream>�����˱�׼����/��������󡣰�����<iostream>Ҳ�Զ�������<ios>��<streambuf>��<istream>��<ostream>��<iosfwd>��
                  //ͷ�ļ�<iostream>�еĶ��������
                  //��narrow characters(char)��խ�ַ���cin(standard input stream (object))��cout(standard output stream (object))��cerr(standard output stream for errors (object))��clog(standard output stream for logging (object))��
                  //��wide characters(wchar_t)�����ַ���wcin(standard input stream (wide) (object))��wcout(standard output stream (wide)  (object))��wcerr(standard output stream for errors  (wide)  (object))��wclog(standard output stream for logging (wide) (object))��
using namespace std;//���庯�� 

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
	cout << "������n��k: ";
	cin >> n >> m;
	tot = 0;
	f(a, n, m, 0);
	cout << "�����Ϊ��" << tot << endl;
	return 0;
}

