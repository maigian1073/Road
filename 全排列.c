//��Ŀ���ƣ�C����ȫ��������
/* */ 
#include <stdio.h> 
#include <stdlib.h>//ͷ�ļ������ṩһЩ��������ų���������ϵͳ������

int combine(int n, int m);//����combine�������ֱ��ʾ�������������ÿһ����ж���ĸ���

int main(int argc, char* argv[])//argc��int���ͣ�argc��ʾargv�д��string�ĸ���
                               //argv������������һ��string����
{
	combine(8, 5);//��combine�����ṩ��������Ҫ�󣬶�������Ϊ8��ÿһ����϶������Ϊ5.
	return 0;
}

int combine(int n, int m)//��n��ѡm������������ֵΪ�����Ҳ������ͽ�Ϊ���� 
{
	int i, j, t;
	int* arr = (int*)malloc(sizeof(int) * n);//�����洢�������ϣ�malloc(),sizeof(int)��ʾ����Ԫ�صĸ���
	                                        //n��ʾԪ�ص�λ����

	if (m > n || m < 1)
	{
		return -1; //��if�������жϣ�ȷ��n>=m>=1
	}

	for (i = 1; i <= n; i++)//�������
	{
		arr[i - 1] = i;
	}

	int* a = (int*)malloc(sizeof(int) * m);//�����洢ÿ���㷨�����ĵ�ǰ���
	for (i = 0; i < m; i++)//��һ����ϣ�a[0]=1,a[1]=2,...a[m-1]=m;
	{
		a[i] = i + 1;
	}

	for (j = m; a[0] <= (n - m + 1);)//�����Ϊ���һ��ʱ��ѭ��������
		                            //��a[0]=n-m+1,...,a[m-1]=n;
		                           //j�����жϽ�λ���Լ���λ֮��ĵ���
	{

		for (; a[m - 1] <= n; a[m - 1]++)//���һλ���ϵ�����
			                            //ֱ���ﵽ���ֵ��������λ
		{
			for (t = 0; t < m; t++)
			{
				printf("%d\t", arr[a[t] - 1]);

			}
			printf("\n");

		}

		for (j = m - 2; j >= 0; j--)//�ж�a[1]--a[m-2]�Ƿ��н�λ 
			                       //��� a[m-1]>n ������λ
		{
			a[j]++;
			if (a[j] <= (j + n - m + 1))//a[j]����λ,��ôa[j-1]Ҳ����λ�����������ж�
			{
				break;
			}
		}

		for (j++; j > 0 && j < m; j++)//������ʹ��a[index-1],a[index],a[index]
			                         //˳�����У�����a[index]������λ
		{
			a[j] = a[j - 1] + 1;
		}
	}

	free(arr);
	free(a);

	getchar();//
	return 0;
}

