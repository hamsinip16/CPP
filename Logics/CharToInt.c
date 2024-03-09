//To convert char to integer
#include <stdio.h>

int main() {
    char word[100] = "123456789";
    int i, data = 0;
    
	for (i = 0; word[i] != '\0'; i++) {
		data = data * 10 + (word[i] - '0');
	}
  
    printf("Int value = %d", data);

    return 0;
}
