#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	
	char s[256], *e;
	double x = 0;
	
	printf("変換する数値を入力してください。");
	scanf("%s", s);
	
	x = strtod(s, &e);
	printf("%1.3lf\n", x);
	printf("%1.3lf\n", strtod(s, &e));
	return 0;
}
