//��Ŀ���ƣ��ַ�������
/* */ 
#include<stdio.h>// <stdio .h>ͷ�ļ������������������͡�һЩ��͸��ֺ�����ִ������������
                 //�ٿ���� �ڿ�� �ۿ⺯�� 
#include <stdlib.h>//<stdlib .h>ͷ�ļ��������ĸ��������͡�һЩ��͸���ͨ�ù��ߺ�����
#include <string.h>//֮��������char*���ַ�����ѡ��C���Ա�׼������е�<string.h>�࣬����Ϊ����ǰ�߱Ƚ����������ص����ڴ��Ƿ��㹻���ַ������ȵȵ�
                   //������Ϊһ������֣������ɵĲ�����������������Ǵ��������µ���Ҫ�����Ǿ����԰���������C++�Ļ�����������
                   //���ȣ�Ϊ�������ǵĳ�����ʹ��string���ͣ����Ǳ������ͷ�ļ� #include<string.h>
void bubblechar_sort(char b[], int n)//'void'�ں���ǰʹ��ʱ��������ʾָ�������򲻴���������ֵ 
{ 
 int i, j; //�����������ͱ���i��j 
 char k; //�����ַ��ͱ���k 
 for(i = 0; i < n -1;i++) //ʹ��forѭ����䣬���ж�i��һϵ�в��� 
 {  
  for( j = 0; j < n - 1 - i; j++)//ʹ��forѭ����䣬���ж�j��һϵ�в��� 
  {     
   if(b[j]>b[j+1])//ʹ��if�ж���䣬�ж�     
   {         
    k=b[j];          
    b[j]=b[j+1];          
    b[j+1]=k;     
   }  
  } 
 }
}
  
int StrBinarySearch(char A[], char c, int N)//���ú��� 
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
 
int main()//�����޲ι��캯�� 
{   
 printf("������Ӣ�ĵ��ָ���\n");
 int a;//����һ�����ͱ���a 
 scanf("%d",&a);//ʹ��scanf���뺯��������a��ֵ 
 char str[60];//����һ��60������һά���� 
 while(getchar() != '\n');//��������������س����У���ȥ���з�
 printf("������Ӣ�ĵ�������\n");//ʹ��printf������������'������Ӣ�ĵ�������' 
 for(int i = 0; i < a-1; i++)//ʹ��forѭ����䣬���жԱ���i��һϵ�в��� 
 {
  scanf("%c",&str[i]);//ʹ��scanf����������ַ���'str[i]' 
 }
 while(getchar() != '\n');//�� 
 bubblechar_sort(str,a);//���ú��� 
 printf("��������Ҫ���ҵ�Ӣ�ĵ���\n");
 char input;
 scanf("%c",&input);
 int result  = StrBinarySearch(str, input,a);
 if(result == -1)
  printf("û�ҵ�\n");
 else
  printf("�ҵ���\n");
 printf("\n");
 system("pause");
 return 0;
}

