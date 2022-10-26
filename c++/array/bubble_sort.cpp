#include <iostream>

int main() {
	//Define variables
  const std::string mesg[] = {
    "Массив до сортировки:",
    "Массив после сортировки:",
  };
  int arr[] = {
    0, -24, 4, 10, 11, 22,
    33, 32, 44, 56, 67, 78,
    89, -12, 25, 99, 100, 128,
  };
  const int size = sizeof(arr) / sizeof(arr[0]);
	bool swapon = false;
	//End define
  
	//Print array
  std::cout << mesg[0] << std::endl;
  for (int i = 0; i < size; ++i) 
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
	//End print

	//Realise sort
	do
	{
		swapon = false;
		for (int i = 1; i < size; ++i)
		{
			int prev_index = i - 1;
			int temp = arr[prev_index];

			if (arr[i] <  temp)
			{
				arr[prev_index] = arr[i];
				arr[i] = temp;
				swapon = true;
			}	
		}
	
	} while (swapon);
	//End sort
 
	//Print array
  std::cout << std::endl;
  std::cout << mesg[1] << std::endl;
  for (int i = 0; i < size; ++i) 
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
	//End print

  return 0;
}
