#include <iostream>

int karweng() {
	int x = 0, y;
	bool z = true;

	if (x++) y = 10;
	else y = 5;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	y += z;
	std::cout << "y = " << y << std::endl;

	while ((x < y) && z == true) {
		x += 1;
		if (x == 3) z = false;
		std::cout << "x = " << x << std::endl;
	}

	z = (z != y);
	std::cout << "z is " << z << std::endl;

	if (x <= y) x++;

	std::cout << "x is " << x << std::endl;
	std::cout << (x > z) << std::endl;
	std::cout << (y == z) << std::endl;
	std::cout << (!x != !y) << std::endl;

	return 0;
}