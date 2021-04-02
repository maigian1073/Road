#include <stdio.h>
/*是在程序编译之前要处理的内容，称为编译预处理命令。编译预处理命令还有很多，它们都以“#”开头，并且不用分号结尾，所以是c语言的程序语句。*/
#include <stdbool.h> 
/*这个程序用到了bool、true和 false 等名称，它们在C99的 < stdbool.h>中定义。如果你的编译器不支持该头
需要自己定义这些名称。一种做法是在 main 函数的上面加上下面几行：
#define true 1
#define false 0
typedef int bool;*/
int main(void)
{
	bool digit_seen[10] = {false};//定义数组类型 
	int digit;//定义数组 
	long n ;
	printf("Enter a number:");
	scanf("%ld",&n);
	
	while(n>0){
		digit = n % 10;
		if(digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}
	if(n>0)
		printf("Repeated digite\n");
	else
		printf("No repeated digit\n");
	return 0;
}


