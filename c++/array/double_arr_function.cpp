#include <iostream>

int **create_two_dim_array(const int rows, const int colls)
{
  int **arr = new int *[rows];

  for (int i = 0; i < rows; ++i) {
    arr[i] = new int[colls];
  }

  return arr;
}

void fill_two_dim_array(int **arr, const int rows, const int colls) 
{
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < colls; ++j) {
      arr[i][j] = (i + 1) * (j + 1);
    }
  }
}

void print_two_dim_array(int **arr, const int rows, const int colls) 
{
  std::cout << "Таблица умножения:" << std::endl;
  
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < colls; ++j) {
      std::cout << arr[i][j] << "\t";
    }
    
    std::cout << std::endl;
  }
}

void delete_two_dim_array(int **arr, const int rows, const int colls)
{
  for(int i = 0; i < rows; ++i)
    {
      delete[] arr[i];
    }

  delete[] arr;
  arr = nullptr;
}

int main() 
{
  int rows = 0;
  int colls = 0;

  std::cout << "Введите количество строк: ";
  std::cin >> rows;
  std::cout << "Введите количество столбцов: ";
  std::cin >> colls;

  int** arr = create_two_dim_array(rows, colls);

  fill_two_dim_array(arr, rows, colls);
  print_two_dim_array(arr, rows, colls);
  delete_two_dim_array(arr, rows, colls);
  
  arr = nullptr;
  return 0;
}
