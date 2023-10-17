#include <stdio.h>

int main()
{
	int c, res = 0, fat = 0;
	while ((c = getchar()) != 0){
		if (c >= '0' && c <= '9'){
			fat = fat * 10 + (c - '0');}
		if (c == '-'){
			if (res == 0){
				res = fat;}
			else{
				res -= fat;}
			fat = 0;}
		if (c == '+'){
			res += fat;
			fat = 0;}}
	return 0;
}
