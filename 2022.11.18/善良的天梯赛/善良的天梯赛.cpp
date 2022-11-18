//天梯赛是个善良的比赛。善良的命题组希望将题目难度控制在一个范围内，使得每个参赛的学生都有能做出来的题目，并且最厉害的学生也要非常努力才有可能得到高分。
//
//于是命题组首先将编程能力划分成了 10 ^6个等级（太疯狂了，这是假的），然后调查了每个参赛学生的编程能力。现在请你写个程序找出所有参赛学生的最小和最大能力值，给命题组作为出题的参考。
//
//输入格式：
//输入在第一行中给出一个正整数 N（≤2×10 ^4)即参赛学生的总数。随后一行给出 N 个不超过 10 ^ 6的正整数，是参赛学生的能力值。
//
//输出格式：
//第一行输出所有参赛学生的最小能力值，以及具有这个能力值的学生人数。第二行输出所有参赛学生的最大能力值，以及具有这个能力值的学生人数。同行数字间以 1 个空格分隔，行首尾不得有多余空格。
//
//输入样例：
//10
//86 75 233 888 666 75 886 888 75 666
//输出样例：
//75 3
//888 2
#include<stdio.h>
int main(){
	printf("请输入学生数量：");
	int n;
	scanf("%d",&n);
	printf("请输入%d名学生的成绩：",n);
	int arr[20000]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int k=1;k<n;k++){
		if(arr[k]>max){
			max = arr[k];
		}
		if(arr[k]<min){
			min = arr[k];
		}
	}
	int sumone=0;
	int sumtwo=0;
	for(int k=0;k<n;k++){
   		if(arr[k]==max){
   			sumone+=1;
   		}
   		if(arr[k]==min){
   			sumtwo+=1;
   		}
   }
   printf("最大值及其出现次数：%d %d\n",min,sumtwo);
   printf("最小值及其出现次数：%d %d",max,sumone);
	return 0;
}
