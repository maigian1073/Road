/*项目名称：简单的四则计算器*/
// 
#include <stdio.h>/*是在程序编译之前要处理的内容，称为编译预处理命令。编译预处理命令还有很多，它们都以“#”开头，并且不用分号结尾，所以是c语言的程序语句。*/
#include <math.h>/*意思是包含math库，实际上就是一个头文件，里面是一些已经写好的代码，形式上是一个个的函数，包含进来以后就可以使用里面的各种数学函数，如幂函数、三角函数、指数函数等。*/
void main()/*void main()表示函数无返回值，就是说在程序的结尾处不需要加上return 0。而return是在函数体中，用来返回特定值的。*/
{
	int x;/*int是基本的整数类型*/
	char ch, answer = 'y', s;/*char 称为字符类型，只能用单引号' '来包围，不能用双引号" "包围。而字符串只能用双引号" "包围，不能用单引号' '包围。*/

	do/*do-while循环比while循环要多一次*/
	{
		printf("四则运算请按0，求平方根请按1，求倒数请按2，求幂次方请按3\n");/*printf函数是输出函数printf ()函数的挪用式样为: printf ("<式样化字符串>"，<参数表>)； 其中式样化字符串包括两部分内容: 一部分是正常字符, 这些字符将按原样输出；另一部分是式样化规定字符, 以"%"开端, 后跟一个或几个规定字符, 用来确定输出内容式样。*/
		scanf_s("%d", &x);/*scanf函数的一般形式为：
    scanf(“格式控制字符串”, 地址表列);*/

		if (x == 0)/*“==”是关系运算符，而“=”是赋值运算符*/
		{
			int a, b;/*定义a,b*/
			printf("输入四则运算符：");/*屏幕上输出输入四则运算符*/
			scanf_s("%c", &ch):/*输入一个数，用ch来代表输入的数*/
			printf("输入进行运算的两个数：\n");/*在屏幕上输出输入进行四则运算的两个数*/
			scanf_s("%d%d", &a, &b);/*输入两个数，分别是a，b*/

			switch (ch)/*case 后的常量指的是常量表达式，它必须是整数类型。在一个特定的 switch 语句中，每个 case 常量都必须具有独一无二的值，不可以重复。但是 switch 语句可以包含多个 case 标*/
			{
			case '+':printf("%d+%d=%d", a, b, a + b); break;/*break为c语言的关键语句可以将break语句放在case标号之后的任何位置，每当执行break语句是就代表退出switch语句体*/
			case '-':printf("%d-%d=%d", a, b, a - b); break;/*％d整型输出，％ld长整型输出，％o以八进制数形式输出整数，％x以十六进制数形式输出整数，％u以十进制数输出unsigned型数据(无符号数)。％c用来输出一个字符，％s用来输出一个字符串，％f用来输出实数，以小数形式输出，％e以指数形式输出实数，*/
			case '*':printf("%d*%d=%d", a, b, a * b); break;
			case '/':printf("%d/%d=%d", a, b, a / b); break;
			default:break;
			}
		}

		if (x == 1)/*如果x等于1，则执行这个语句*/
		{
			int c;/*定义c为整型变量*/
			printf("输入进行运算的一个数：\n");/*输出输入进行运算的一个数*/
			scanf_s("%d", &c);/*输入一个数，c代表这个数*/
			printf("%d的平方根为%f\n", c, sqrt((double)c));/*后面一个c的函数类型改变，double为数据类型，int为整型，float和double都是浮点型*/
		}

		if (x == 2)/*当x等于2时，执行这个语句*/
		{
			int c;/*定义c为整型变量*/
			printf("输入进行运算的一个数：\n");/*在屏幕上输出请输入进行运算的一个数*/
			scanf_s("%d", &c);/*输入一个数，c代表输入的数*/
			printf("%d的倒数为1/%d", c, c);/*%d就是c代表的数*/
		}

		if (x == 3)/*当x等于3是执行这个语句*/
		{
			int x, y;/*定义下x，y为整型变量*/
			printf("输入进行运算的两个数：\n");/*在屏幕上输出请输入进行运算的两个数*/
			scanf_s("%d%d", &x, &y);/*分别输入下x，y的值*/
			printf("%d的%d次幂为%d", x, y, pow((double)x, (double)y));/*改变了下x，y的类型*/
		}

		printf("\n\n是否需要再次计算，如需键入y,否则n:");/*在屏幕上输出是否需要再次计算，如需键入y,否则n*/
		scanf_s("%c", &s);/*输入s的值*/
	} while (answer == s);/*当answer的值不等于s时，跳出循环*/
}
void main()
{
	int i, j, n;/*定义i，j，n为整型变量*/
	n = 0;/*给m赋值为0*/
	for(i=100;i<=200;i++)/*当i等于100且i小于等于200时，进行循环，每完成一次循环，i的值就加1*/
	{
		j = 2;/*j等于2*/
		while(i)
	}
}


