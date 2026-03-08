#include <iostream>

int main() {

	for (int i = 1; i < 21; i++) {
		if (i % 5 == 0) {
			std::cout << "BUM ";
		}else {
			std::cout << i << " ";
		}
	}
}