#include <iostream>
#include <fstream>

int **create_two_dim_array(const int rows, const int colls)
{
  int **arr = new int *[rows];

  for (int i = 0; i < rows; ++i) {
    arr[i] = new int[colls];
  }

  return arr;
}

void print_two_dim_array(int **arr, const int rows, const int colls) 
{
  for (int i = 0; i < rows; ++i) {
    for (int j = colls - 1; j >= 0; --j) {
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
      arr[i] = nullptr;
    }

  delete[] arr;
  arr = nullptr;
}

int main() {
  const std::string mesg = "Не удалось открыть файл. Пороверьте его наличие по заданному пути.";
  const std::string path = "in.txt";
  int row = 0;
  int col =0;
  int val = 0;

  std::ifstream fin (path);

  if (!fin.is_open())
  {
    std::cout << mesg << std::endl;

    return 1;
  }

  fin >> row;
  fin >> col;

  int** arr = create_two_dim_array(row, col);

  for (int i = 0; i < row; ++i)
    {
      for (int j =0; j < col; ++j)
        {
           fin >> val;
           arr[i][j] = val;
        }
    }

  print_two_dim_array(arr, row, col);

  delete_two_dim_array(arr, row, col);
  fin.close();

  return 0;
}
