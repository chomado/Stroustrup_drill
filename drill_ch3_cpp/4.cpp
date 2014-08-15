/* ユーザにふたつの整数値を入力させるプログラムを記述せよ. 整数値はval1およびval2という名前のint型の変数に代入する.
 * それらの値の最小値, 最大値, 合計, 差, 席, 比率をもとめ, ユーザに報告すること.
 */
#include <iostream>
int main()
{
	int val1, val2;
	std::cout << "1つ目の数値を入力: ";
	std::cin  >> val1;
	std::cout << "2つ目の数値を入力: ";
	std::cin  >> val2;
	
	std::cout << "最大値: " << ((val1 < val2) ? val2 : val1) << std::endl;
	std::cout << "最小値: " << ((val2 < val1) ? val2 : val1) << std::endl;
	std::cout << "合計  : " << val1 + val2 << std::endl;
	std::cout << "差    : " << val1 - val2 << std::endl;
	std::cout << "積    : " << val1 * val2 << std::endl;
	std::cout << "比率  : " << val1 / val2 << std::endl;
}
