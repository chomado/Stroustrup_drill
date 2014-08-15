// マイルからキロメートルに変換するプログラムをC++で記述せよ. 1マイルは1.609キロメートル
#include <iostream>
int main()
{
	double mile = 0;
	std::cout << "マイル: ";
	std::cin  >> mile;
	double km = mile * 1.609;
	std::cout << km << "キロメートル" << std::endl;
}
