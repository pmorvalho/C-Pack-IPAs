#include <stdio.h>

int main()
{
	int c, res = 0, fat = 0, op = 0;
	while ((c = getchar()) != EOF){
		if (c >= '0' && c <= '9'){
			fat = fat * 10 + (c - '0');}
		else if (c == '-'){
			op = -1;}
		else if (c == '+'){
			op = 1;}
		else if (c == ' ' && res == 0 && op == 0){
			res = fat;
			fat = 0;}
		else if ((c == ' ' || c == '\n') && fat != 0){
			res += op * fat;
			op = 0;
			fat = 0;}}
	printf("%d\n", res);
	return 0;
}
