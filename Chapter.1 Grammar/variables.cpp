#include <iostream>

int main()
{
	/*
	 * 存储空间大小单位:
	 * bit(比特)-1位二进制数
	 * 8 bit = 1 Byte (字节)
	 * 1 Kib = 1024 bit
	 * 1 KB = 1024 Byte
	 * 1 MB = 1024 KB
	 * 1 GB = 1024 MB
	 * 变量定义的格式:
	 * 	Type variable_name;
	 */
	// 定义了一个整数类型的变量，名叫number;
	int number = 10;
	// 给number赋值为10;
	// number = 10;
	std::cout << number << "\n"
			  << number << std::endl; // endl: End of line

	// 定义了整数类型的变量，但是我们没有给他初始化
	int uninitialized_number;
	std::cout << uninitialized_number << std::endl;

	int num1, num2 = 1, num3;

	// 存储小数
	float float_number = 10.0;

	// 布尔类型变量只能存储一个bit，只能存储true或false
	// true=1 false=0
	bool bool_number = true;
	return 0;
}