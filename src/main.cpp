#include <Magick++.h>

int main() {
	Magick::Image image("100x100", "white");
	image.write("output.png");

	return 0;
}

