//项目名称：进制转换
/* */
#include<iostream>// 头文件<iostream>定义了标准输入/输出流对象。包含了<iostream>也自动包含了<ios>、<streambuf>、<istream>、<ostream>和<iosfwd>。
                  //头文件<iostream>中的对象包括：
                  //①narrow characters(char)即窄字符：cin(standard input stream (object))、cout(standard output stream (object))、cerr(standard output stream for errors (object))、clog(standard output stream for logging (object))；
                  //②wide characters(wchar_t)即宽字符：wcin(standard input stream (wide) (object))、wcout(standard output stream (wide)  (object))、wcerr(standard output stream for errors  (wide)  (object))、wclog(standard output stream for logging (wide) (object))。
#include<cstring>//<cstring>是标准库头文件<string.h>的C++标准库版本， 包含了C风格字符串（NUL即'\0'结尾字符串）相关的一些类型和函数的声明，例如strcmp、strchr、strstr等。<cstring>和<string.h>的最大区别在于，其中声明的名称都是位于std命名空间中的，而不是后者的全局命名空间。
                 //看定义就知道，string是新标准，定义了namespace std;而cstring虽然也是新标，但是定义中包含的是string.h。
#include<vector>//头文件<vector>,vector是向量类型，可以容纳许多类型的数据，因此也被称为容器； 
                //(可以理解为动态数组，是封装好了的类）
                //进行vector操作前应添加头文件#include <vector>
#include<math.h>//函数库<math.h>，里面包含大量数学函数，<math.h>的每一个函数都能接受定义域内的所有参数值，对于其他所有的参数都报告定义域错误。
                //发生定义域错误时，errno设置为EDOM。如果输入的不是数字，那么函数返回一个表示非数字的特殊编码
#include<algorithm>//<algorithm>头文件是C++的标准算法库，它主要应用在容器上。 因为所有的算法都是通过迭代器进行操作的
                   //所以算法的运算实际上是和具体的数据结构相分离的 ，也就是说，具有低耦合性。 因此，任何数据结构都能使用这套算法库，只要它具有相应的迭代器类型。
#include<queue>//在C++中，使用头文件#include <queue>即可使用队列类。
               //常用函数：1. push 2. pop 3. size 4. empty 5. front 6. back
using namespace std;//

#define maxi 0x3f3f3f3f//

int hanoi(int n)//定义变量hanoi n； 
{
	if (n == 1)//如果n等于1 ； 
		return 2;//那么返回值为2 ； 
	else//否则 ； 
		return 3 * hanoi(n - 1) + 2;//返回值为3乘以整型变量hanoi乘以n减一的差再加上2 ； 
}
int main(int argc, char const* argv[])//调用函数 ； 
{
	int n;//定义一个整型变量n； 
	while (cin >> n)//' >> '为右移运算符，定义：将一个数的各二进制全部右移若干位，正数左补0，负数左补1，右边丢弃。
	                //本题中' >> '为<iostream>中的运算符，用来从一个istream对象读取输入数据； 
	{
		cout << hanoi(n) << endl;//从右往左进行二进制右移运算； 
	}
	return 0;//代码中的命令操作运行完毕，返回0； 
}

