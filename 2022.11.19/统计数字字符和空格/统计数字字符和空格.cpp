//����Ҫ���д��������һ���ַ���ͳ�����������ַ����ո�������ַ��ĸ���������ʹ��switch����д��
//
//�����ʽ:
//������һ���и��������ַ������һ���س���ʾ����������������ڡ�
//
//�����ʽ:
//��һ���ڰ���
//
//blank = �ո����, digit = �����ַ�����, other = �����ַ�����
//�ĸ�ʽ�������ע�⣬�Ⱥŵ����Ҹ���һ���ո񣬶��ź���һ���ո�
//
//��������:
//���������һ�����롣���磺
//
//Reold 12 or 45T
//�������:
//�����������Ӧ����������磺
//
//blank = 3, digit = 4, other = 8
#include<stdio.h>
int main(){
	int sum1=0,sum2=0,sum3=0;
	char n;
	while(n!='\n'){
		n = getchar();
		switch(n){
			case ' ': 
				sum1++;
				break;
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				sum2++;
				break;
			default:
				sum3++;
				break;
		}
	}
	printf("blank = %d, digit = %d, other = %d",sum1,sum2,sum3-1);
	return 0;
} 
