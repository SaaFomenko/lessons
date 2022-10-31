#include <iostream>
#include <fstream>

int main() {
  const std::string mesg[] = {
    "Введите размер массива (целое положительное число): ",
    "Не удалось создать файл для сохранения массива, проверьте права доступа к адресу: ",
    "Эти данные были записаны в файл: "
  };
  const std::string save_file = "./out.txt";

  std::ofstream fout (save_file);

  if (!fout.is_open())
  {
    std::cout << mesg[1] << std::endl;

    return 1;
  }
  
  int size = 0;
  
  std::cout << mesg[0];
  std::cin >> size;
    
  int* arr = new int[size];
  
  for (int i = 0; i < size; ++i)
    {
      std::cout << "arr[" << i << "] = ";
      std::cin >> arr[i];
    }

  std::cout << size << "\n";
  fout << size << "\n";

  for (int i = size - 1; i >= 0; --i)
    {
      std::cout << arr[i] << " ";
      fout << arr[i] << " ";
    }

  std::cout << std::endl;
  fout << std::endl;

  std::cout << mesg[2] << save_file << std::endl;
  
  delete[] arr;
  arr = nullptr;
  fout.close();

  return 0;
}
