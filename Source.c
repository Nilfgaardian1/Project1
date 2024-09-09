#include <locale.h>
#include <stdio.h>

void main() {

	setlocale(LC_ALL, "RUS"); // переключение русской кодировки
	puts("Моя первая программа"); // вывод строки

	getchar(); // задержание экрана
	return 5555;

}

