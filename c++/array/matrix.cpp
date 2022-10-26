#include <iostream>

int main() {
  const std::string mesg[] = {
    "Массив: ",
    "Индекс минимального элемента: ",
    "Индекс максимального элемента: ",
  };
  const int arr[][6] = {
    0, -24, 4, 10, 11, 22,
    33, 32, 44, 56, 67, 78,
    89, -12, 25, 99, 100, 128,
  };
  const int rows = sizeof(arr) / sizeof(arr[0]);
  const int colls = sizeof(arr[0]) / sizeof(arr[0][0]);
  const int first_index = 0;
  const int last_index = colls - 1;
  
  int max_element = arr[0][0];
  int min_element = arr[0][0];
  int max_element_index[] = {0, 0};
  int min_element_index[] = {0, 0};
  
  std::cout << mesg[0] << std::endl;

  for (int i = 0; i < rows; ++i) 
  {
    for (int j = 0; j < colls; ++j)
      {
        std::cout << arr[i][j] << "\t";

        int max_temp = max_element;
        int min_temp = min_element;
        
        max_element = arr[i][j] > max_element ? arr[i][j] : max_element;
        min_element = arr[i][j] < min_element ? arr[i][j] : min_element;

        if(max_temp != max_element) 
        {
          max_element_index[0] = i;
          max_element_index[1] = j;
        }

        if(min_temp != min_element) 
        {
          min_element_index[0] = i;
          min_element_index[1] = j;
        }
      }
    std::cout << std::endl;
  }

  std::cout << mesg[1] << min_element_index[0] << " ";
  std::cout << min_element_index[1] << std::endl;
  std::cout << mesg[2] << max_element_index[0] << " ";
  std::cout << max_element_index[1] << std::endl;
 
  return 0;
}
