//本题要求编写程序，输入一行字符，统计其中数字字符、空格和其他字符的个数。建议使用switch语句编写。
//
//输入格式:
//输入在一行中给出若干字符，最后一个回车表示输入结束，不算在内。
//
//输出格式:
//在一行内按照
//
//blank = 空格个数, digit = 数字字符个数, other = 其他字符个数
//的格式输出。请注意，等号的左右各有一个空格，逗号后有一个空格。
//
//输入样例:
//在这里给出一组输入。例如：
//
//Reold 12 or 45T
//输出样例:
//在这里给出相应的输出。例如：
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
