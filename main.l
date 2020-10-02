OPERATER        [\+\-\*\/]
BRANK			[\t ]

%{
#include <stdlib.h>
//#define DEBUG

//数値をスタック
int num_count = 0;
int num_stack[100];
//演算子をスタック
int operater_count = 0;
char operater_stack[100];

int ans = 0;

void setNum(char* num) {
	num_stack[++num_count] = atoi(num);
	#ifdef DEBUG
		printf("debug - setNum(): %d\n", num_stack[num_count]);
	#endif
}

void setOperater(char* ope) {
	operater_stack[++operater_count] = ope[0];
	#ifdef DEBUG
		printf("debug - setOperater(): %c\n", operater_stack[operater_count]);
	#endif
}

void add() {
	while(1) {
		#ifdef DEBUG
			printf("debug - add(): %d\n", num_stack[num_count-1]);
		#endif
		ans += num_stack[num_count--];
		if(num_count == 0) {
			break;
		}
	}
}

void sub() {

}

void mul() {

}

void divi() {

}

void sum() {
	switch(operater_stack[operater_count--]) {
		case '+':
			add();
			break;
		case '-':
			sub();
			break;
		case '*':
			mul();
			break;
		case '/':
			divi();
			break;
		default:
			printf("Not define OPERATER: %s", operater_stack[operater_count+1]);
			break;
	}
	return;
}
void check_action_stack() {
	if(operater_count == 0) {
		sum();
		printf("ans = %d\n", ans);
	}

	if(operater_count < 0) {
		printf("operater_count ERROR");
		operater_count = 0;
		num_count = 0;
	}
}
%}
%%
"("					{ }
")"					{ }
{OPERATER}			{ printf("Ope: %s\n", yytext); setOperater(yytext);}
[[:digit:]]+		{ printf("Num: %s\n", yytext); setNum(yytext);}

{BRANK}				{ }
[\r\n]				{ check_action_stack();  }
.					{ printf("undefine: %s", yytext); }
%%


int main() {
	yylex();
	sum();
	printf("Answer = %d\n", ans);
	return 0;
}
