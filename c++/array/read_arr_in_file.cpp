#include <iostream>
#include <fstream>

int main() {
  const std::string mesg = "Не удалось открыть файл. Пороверьте его наличие по заданному пути.";
  const std::string path = "in.txt";
  int size = 0;
  int val = 0;
  int i = 0;

  std::ifstream fin (path);

  if (!fin.is_open())
  {
    std::cout << mesg << std::endl;

    return 1;
  }

  fin >> size;

  int* arr = new int[size];

  while (fin >> val)
    {
      arr[i] = val;
      ++i;
    }

  for (i = size - 1; i >= 0; --i)
    {
      std::cout << arr[i] << " ";
    }

  std::cout << std::endl;

  delete[] arr;
  arr = nullptr;
  fin.close();

  return 0;
}
