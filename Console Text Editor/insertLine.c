#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

void insertLine(int y, int x, int maxx, int lncount, char arr[][]) {
	x = 0;
	move(y,x);
	int iter = maxx;
	for(; lncount > y; y--) {
		while(0 < iter) {
			if((y-1) != y) {
				memmove(&arr[y-1][x], &arr[y][x], maxx - x);
				iter--;
			}
			else {
				iter = maxx;
				while(0 < iter) {
					memmove(&arr[y][x], &arr[y][x + 1], maxx - x);
					iter--;
				}	
			}
		}
	}
}	
