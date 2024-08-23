/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char map[6562][6562];

void set(int i, int j, int a) {
	memcpy(map[i] + j, map, sizeof(char) *a);
}

void spaceset(int i, int j, int a) {
	memset(map[i] + j, ' ', sizeof(char) * a);
}

int main(void) {
	int n, idx;
	scanf("%d", &n);
	idx = 1;
	map[0][0] = '*';
	

	while (1) {
		set(0, idx, idx);
		set(0, n - idx, idx);
		set(idx, 0, idx);
		spaceset(idx, idx, idx);
		set(idx, n - idx, idx);
		set(n - idx, 0, idx);
		set(n - idx, idx, idx);
		set(n - idx, n - idx, idx);
		idx *= 3;
		if (idx == n)	break;
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", map[i]);
	}
}
*/