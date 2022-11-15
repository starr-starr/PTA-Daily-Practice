//输出斐波那契数列第n项（假设n<1000）。斐波那契数列：0,1，1，2，3，5，8，13……
//
//输入格式:
//一个正整数n,表示斐波那契数列第n项。
//
//输出格式:
//斐波那契数列第n项的值
//
//输入样例:
//在这里给出一组输入。例如：
// 1
//输出样例:
//在这里给出相应的输出。例如：
// 0

#include<stdio.h>
int main(){	
	long long int arr[998];
	int a;
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;
	for(int i=3;i<=998;i++){
		arr[i] = arr[i-1]+arr[i-2];
	}
	printf("请输入第几项：\n");
	scanf("%lld",&a);
	if(a==0||a>998){
		printf("error!");
		return 0;
	}
	printf("第%d项是%lld",a,arr[a]);
	return 0;
}
