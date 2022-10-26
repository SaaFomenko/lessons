// #include <iostream>

// int main(int argc, char** argv) {
//     char c = '\0';
//     std::cout << sizeof(c) << std::endl;  // 1
//     std::cout << sizeof(int) << std::endl;  // 4
//     std::cout << sizeof(1) << std::endl;  // 4 
//     std::cout << sizeof(long) << std::endl;  // 8
//     std::cout << sizeof(float) << std::endl; // 4
//     std::cout << sizeof(1 / 100.0) << std::endl; // 4, 8
// }
// *********************************************************************************************
// #include <iostream>
// #include <bitset>

// int main() {
//     unsigned i = 0xEE00EE00; // [0000 0000, 1111 1111, 0000 0000, 1111 1111]
// 		std::cout << "unsigned size: " << sizeof(unsigned) << std::endl;
//   		std::cout << "i size: " << sizeof(i) << std::endl;
//     std::cout << &i << " " << std::bitset<sizeof(unsigned) * 8>(i) << std::endl;
//  
//     char* begin = reinterpret_cast<char*>(&i);
//     char* end = begin + sizeof(unsigned);
//     for (char* c = begin; c < end; ++c) {
//         unsigned* address = reinterpret_cast<unsigned*>(c);
//         std::cout << address << " " << std::bitset<sizeof(char) * 8>(*c) << std::endl;
//    }
//}
// *********************************************************************************************
// #include <iostream>
// #include <bitset>

// int main() {
//     int i = 0xFF00FF00; // [0000 0000, 1111 1111, 0000 0000, 1111 1111]
//     int j = 0x00FF00FF; // [1111 1111, 0000 0000, 1111 1111, 0000 0000]
//     long l = *reinterpret_cast<long*>(&i);
//     std::cout << std::bitset<sizeof(long) * 8>(l) <<
//     std::endl << std::bitset<sizeof(long) * 8>(0x00FF00FFFF00FF00) << std::endl;
// }
// *********************************************************************************************
// #include <iostream>

// int main(int argc, char** argv) {
//     const int size = 3;
//     int arr[size] = { 1, 2, 3 };
//     std::cout << "arr: " << &arr << ' ' << sizeof(arr) << std::endl;
//     for(int i = 0; i < size; i++) { 
//         std::cout << "arr[" << i << "]: " << &arr[i] << ' ' << sizeof(arr[i]) << std::endl;
//     }
// }
// *********************************************************************************************
// #include <iostream>

// int main() {
//     unsigned char c[sizeof(unsigned)] = { 0x00, 0xFF, 0x00, 0xFF };
//     unsigned i = *reinterpret_cast<unsigned*>(c);  // [0000 0000, 1111 1111, 0000 0000, 1111 1111]
//     std::cout << i << ' ' << 0xFF00FF00 << std::endl;
// }
// *********************************************************************************************
// #include <iostream>

// int main() {
//     unsigned arr[] = {
//         0x4030201,
//         0x8070605,
//         0xC0B0A09
//     };
//     char* begin = reinterpret_cast<char*>(arr);
//     char* end = begin + sizeof(arr);
//     for (char* c = begin; c < end; ++c) {
//         int* address = reinterpret_cast<int*>(c);
//         unsigned value = static_cast<unsigned>(*c);
//         std::cout << "Address: " << address << " Value: " << value << std::endl;
//     }
// }
// *********************************************************************************************
// #include <iostream>

// void calc(int x) {
//     std::cout << "calc x: " << &x << std::endl;
// }

// int main(int argc, char** argv) {
//     int x = 5;
//     calc(x);   
//     std::cout << "main x: " << &x << std::endl;
// }
// *********************************************************************************************
// #include <iostream>

// int value = 0;
// int main() {
//     value = 5;
//     std::cout << value << std::endl;
//     int value = 1;
//     {
//         int value = 2;
//         value = 3;
//         std::cout << value << std::endl;
//     }
//     value = 4;
//     std::cout << value << std::endl;
// }
// *********************************************************************************************
#include <iostream>

int& calc(int x) {
    int result = x * 10;
    return result;
}

int main(int argc, char** argv) {
    int value = 5;
    value = calc(value);
    std::cout << &value << ' ' << value << std::endl; // 50
}
