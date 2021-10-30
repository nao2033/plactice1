#include <stdio.h>
 
int main(void)
{
	//問題、入力された値が5より大きく20より小さいときは「OK」と表示させよ
	/* 整数（文字）型 */
	int number;

	printf("整数を入力してください\n");

	scanf("%d\n",&number);

	if((number > 5) && (number < 20)){
		printf("OK\n");
	}

	return 0;
}



