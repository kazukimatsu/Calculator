#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char siki[100];
	char num_tmp[10];
	double nums[100];
	int i=0, nums_count=0, head_ptr=0, j=0;

	for(i=0;i<100;i++){
		siki[i] = '\0';
		nums[i] = ' ';
	}

	i = 0;
	while((siki[i++] = getchar()) != '\n'){
		printf("%d\n", siki[i-1]);	//d
		printf("siki~:%s\n", siki);	//d
		if(siki[i-1]==' ' || siki[i]=='\n'){
			siki[i-1] = '\0';
			strncpy(num_tmp, siki + head_ptr, i-1);

			printf("num_tmp:%s\n", num_tmp);

			head_ptr = i;
			// int a = atoi(num_tmp);//d
			// nums[0] = (double)a;//d
			nums[nums_count++] = (double)(atoi(num_tmp));//double	にできない
			
			// nums_count++;
			// printf("a:%1.1f\n", (double)a + 1.0);//d
			// printf("num_tmp:%d\n", atoi(num_tmp));//d
			// printf("nums[]:%1.1f\n", nums[0]);//d	
			siki[i-1] = ' ';
		}
		if(siki[i-1] == '')
	}

	printf("siki:%s\n", siki);
	while(nums[j] != ' '){
		printf("%1.1f\n", nums[j]);
		j++;
	}
	printf("footer:%d\n", i);

	return 0;
}
