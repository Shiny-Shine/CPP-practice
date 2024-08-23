/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char map[5000][5000];

int main(void) {
	for (int i = 0; i < 3; i++) {
		memset(map[i], '*', 3);
	}
	memset(map[1]+1, ' ', 1);

	for (int i = 0; i < 3; i++)	printf("%s\n", map[i]);
	for (int i = 0; i < 3; i++) {
		memcpy(map[i] + 3, map[i], 3);
		memcpy(map[i] + 6, map[i], 3);
		memcpy(map[i + 3] , map[i], 3);
		memset(map[i + 3] + 3, ' ', 3);
		memcpy(map[i + 3] + 6, map[i], 3);
		memcpy(map[i + 6], map[i], 3);
		memcpy(map[i + 6] + 3, map[i], 3);
		memcpy(map[i + 6] + 6, map[i], 3);
	}
	printf("\n");
	for (int i = 0; i < 9; i++)	printf("%s\n", map[i]);
}
*/