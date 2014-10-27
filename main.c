#include <stdio.h>
#include <stdlib.h>

static int totalNum=0;
int num[100];
int i;
int count=0;
double ans=0;

add(){
	i=0;
	for(i=0;i<100;i++){
	ans+=num[i];
	}
}//←頑張ったぞう
sub(){
	i=0;
	for(i=0;i<100;i++){
	ans-=num[i];
	}
}//←頑張ったぞう
mult(){
	i=0;
	for(i=0;i<100;i++){
	ans*=num[i];
	}
}//←頑張ったぞう
divi(){
	i=0;
	for(i=0;i<100;i++){
	ans/=num[i];
	}
}//←適当だぞう

int analysis(char[]);

int main(){
	char formula[100];


	printf("数式を入力してください。\n");
	scanf("%s",&formula);

	int i=0;
	analysis(formula);
	while(i<=100){
		switch(formula[i]){
			case '+':
				add();
				break;
			case '-':
				sub();
				break;
			case '*':
				mult();
				break;
			case '/':
				divi();
				break;
			case '(':

				break;
			case ')':

				break;
			case ' ':
				//空白を無視
				break;
		}
		i++;
	}
	//ans = 0;
	printf("formula=%s,ans=%1.2f\n",formula, ans);
	return 0;
}

int analysis(char a[]) /* 入力された式から数だけを抜き出す */
{
	for(i=0;i<100;i++){
		switch(a[i]){
			case '+':
				continue;
			case '-':
				continue;
			case '*':
				continue;
			case '/':
				continue;
			case '(':
				continue;
			case ')':
				continue;
			case ' ':
				//空白を無視
				continue;
			default:
				count++;
				char t[1];
				strncpy( t, a+i, 1 );
				num[i]=atoi(t);
				continue;
		}
	}
}
