#include <stdio.h>
/*���ڳ������֮ǰҪ��������ݣ���Ϊ����Ԥ�����������Ԥ��������кܶ࣬���Ƕ��ԡ�#����ͷ�����Ҳ��÷ֺŽ�β��������c���Եĳ�����䡣*/
#include <stdbool.h> 
/*��������õ���bool��true�� false �����ƣ�������C99�� < stdbool.h>�ж��塣�����ı�������֧�ָ�ͷ
��Ҫ�Լ�������Щ���ơ�һ���������� main ����������������漸�У�
#define true 1
#define false 0
typedef int bool;*/
int main(void)
{
	bool digit_seen[10] = {false};//������������ 
	int digit;//�������� 
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


