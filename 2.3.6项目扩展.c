//��Ŀ���ƣ�����ת��
/* */
#include<iostream>// ͷ�ļ�<iostream>�����˱�׼����/��������󡣰�����<iostream>Ҳ�Զ�������<ios>��<streambuf>��<istream>��<ostream>��<iosfwd>��
                  //ͷ�ļ�<iostream>�еĶ��������
                  //��narrow characters(char)��խ�ַ���cin(standard input stream (object))��cout(standard output stream (object))��cerr(standard output stream for errors (object))��clog(standard output stream for logging (object))��
                  //��wide characters(wchar_t)�����ַ���wcin(standard input stream (wide) (object))��wcout(standard output stream (wide)  (object))��wcerr(standard output stream for errors  (wide)  (object))��wclog(standard output stream for logging (wide) (object))��
#include<cstring>//<cstring>�Ǳ�׼��ͷ�ļ�<string.h>��C++��׼��汾�� ������C����ַ�����NUL��'\0'��β�ַ�������ص�һЩ���ͺͺ���������������strcmp��strchr��strstr�ȡ�<cstring>��<string.h>������������ڣ��������������ƶ���λ��std�����ռ��еģ������Ǻ��ߵ�ȫ�������ռ䡣
                 //�������֪����string���±�׼��������namespace std;��cstring��ȻҲ���±꣬���Ƕ����а�������string.h��
#include<vector>//ͷ�ļ�<vector>,vector���������ͣ���������������͵����ݣ����Ҳ����Ϊ������ 
                //(�������Ϊ��̬���飬�Ƿ�װ���˵��ࣩ
                //����vector����ǰӦ���ͷ�ļ�#include <vector>
#include<math.h>//������<math.h>���������������ѧ������<math.h>��ÿһ���������ܽ��ܶ������ڵ����в���ֵ�������������еĲ��������涨�������
                //�������������ʱ��errno����ΪEDOM���������Ĳ������֣���ô��������һ����ʾ�����ֵ��������
#include<algorithm>//<algorithm>ͷ�ļ���C++�ı�׼�㷨�⣬����ҪӦ���������ϡ� ��Ϊ���е��㷨����ͨ�����������в�����
                   //�����㷨������ʵ�����Ǻ;�������ݽṹ������ ��Ҳ����˵�����е�����ԡ� ��ˣ��κ����ݽṹ����ʹ�������㷨�⣬ֻҪ��������Ӧ�ĵ��������͡�
#include<queue>//��C++�У�ʹ��ͷ�ļ�#include <queue>����ʹ�ö����ࡣ
               //���ú�����1. push 2. pop 3. size 4. empty 5. front 6. back
using namespace std;//

#define maxi 0x3f3f3f3f//

int hanoi(int n)//�������hanoi n�� 
{
	if (n == 1)//���n����1 �� 
		return 2;//��ô����ֵΪ2 �� 
	else//���� �� 
		return 3 * hanoi(n - 1) + 2;//����ֵΪ3�������ͱ���hanoi����n��һ�Ĳ��ټ���2 �� 
}
int main(int argc, char const* argv[])//���ú��� �� 
{
	int n;//����һ�����ͱ���n�� 
	while (cin >> n)//' >> 'Ϊ��������������壺��һ�����ĸ�������ȫ����������λ��������0��������1���ұ߶�����
	                //������' >> 'Ϊ<iostream>�е��������������һ��istream�����ȡ�������ݣ� 
	{
		cout << hanoi(n) << endl;//����������ж������������㣻 
	}
	return 0;//�����е��������������ϣ�����0�� 
}

