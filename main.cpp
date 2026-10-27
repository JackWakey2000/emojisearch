#include <cstdio>
#include <iostream>
using namespace std;

void cls() {
	printf("\033[999S\033[3J\033[H");
}

int main() {
	bool running = true;
	while (running) {
		cls();
		printf("Type a search query: ");

		running = false;

	}
	return 0;
}
