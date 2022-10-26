#include <iostream>

int main()
{
	int a=0, b=0, c=0;

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Введите третье число: ";
	std::cin >> c;
	std::cout << std::endl;

	int first = a>b && a>c ? a : b>c ? b : c;
  int last = a<b && a<c ? a : b<c ? b : c;
  int middle = last<a && first>a ? a : last<b && first>b ? b : c;

  std::cout << "Результат: ";
  std::cout << first << " ";
  std::cout << middle << " ";
  std::cout << last << std::endl;

	return 0;
}
