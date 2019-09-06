
#include <iostream>
int main() {
	int num;
	int check = 2;
	int div = 2;
	int flag = 0;
	std::cout << "please enter the number";
	std::cin >> num;
	while (check < num) {
		while (check%div!=0 && div <= check/2) {
			flag++;
			div++;
		}
		if (flag + 1 == check/2) {
			std::cout << check << "\t";
		}
		flag = 0;
		div = 2;
		check++;
	}
}