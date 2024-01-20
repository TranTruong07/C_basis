#include <stdio.h>
int main() {
	int h = 1000;
	int j = 1000%168;
	int t = h / 168;
	int n = j / 24;
	int g = j % 24;
	
	printf("%d tuan -%d ngay - %d gio\n", t, n, g);
	
	printf("%d tuan -%d ngay - %d gio", h/(7*24), (h%(7*24))/24, (h%(7*24))%24);
}
