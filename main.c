#include <stdio.h>

add(){}//←頑張って
sub(){}//←頑張って
mult(){}//←頑張って
divi(){}//←頑張って
stack(num[]){

}

int main(){
	char formula[100];
	double ans;

	printf("数式を入力してください。\n");
	scanf("%s",&formula);

	int i=0;
	while(i<=100){
		switch(formula[i]){
			case '+':
				add();
				break;
			case '-':
				sub();				break;
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
			default:
				stack(formula[i]);
		}
		i++;
	}
	ans = 0;
	printf("formula=%s,ans=%d\n",formula, ans);
}