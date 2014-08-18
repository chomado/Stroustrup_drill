#include <iostream>
// while文を使って, 『対応する整数で文字の表を書き出してみよう』
int main()
{
	int i = 0;
	while (i < 26) {
		std::cout << static_cast<char>('a' + i) << '\t' << 'a' + i << (i%2 ? '\n':'\t');
		i++;
	}
}
