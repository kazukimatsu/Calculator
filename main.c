/*注意事項
//dはデバック処理用
**この辺のことはそのうちreadmeに移ります。
*/

#include <stdio.h>
#include <string.h>

int main()
{
//初期化--------------------------------------------------------
	char siki[100];
	char num_tmp[100];
	char *not_num_tmp;
	double nums[100];
	int i=0, nums_count=0, head_ptr=0, j=0, fptr=0;

	for(i=0;i<100;i++){
		siki[i] = '\0';
		nums[i] = ' ';
	}
//ここまで初期化----------------------------------------------------

	while((siki[fptr++] = getchar()) != '\n'){
		printf("%d\n", siki[fptr-1]);	//d
		printf("siki~:%s\n", siki);	//d
		if(siki[fptr-1]==' ' || siki[fptr]=='\n'){
			siki[fptr-1] = '\0';
			strncpy(num_tmp, siki + head_ptr, fptr-1);//数式から数字の場所だけ指定している。

			printf("num_tmp:%s\n", num_tmp);//d
			num_tmp[fptr - head_ptr] = '\0';
			head_ptr = fptr;
			// int a = atoi(num_tmp);//d
			// nums[0] = (double)a;//d
			nums[nums_count++] = strtod(&num_tmp,&not_num_tmp);//strtodは文字列を小数に変換する（うまくいってない）
			printf("===>%1.1f\n", strtod(&num_tmp,&not_num_tmp));
			// printf("a:%1.1f\n", (double)a + 1.0);//d
			// printf("num_tmp:%d\n", atoi(num_tmp));//d
			// printf("nums[]:%1.1f\n", nums[0]);//d	
			siki[fptr-1] = ' ';
		}
	}
	if(siki[i-1] != ' '){
		printf("siki:%s\n", siki);
		while(nums[j] != ' '){
		printf("[%d] %1.1f\n", j, nums[j]);
		j++;
		}	
	}
	printf("footer:%d\n", fptr);

	return 0;
}
