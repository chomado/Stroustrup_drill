#include <iostream>
int main()
{
	for (int i=0; i<26; i++) {
		std::cout << static_cast<char>('A'+ i) << '\t' << 'A'+i << (i%2 ? '\n':'\t');
	}
	std::cout << std::endl;
	for (int i=0; i<26; i++) {
		std::cout << static_cast<char>('a'+ i) << '\t' << 'a'+i << (i%2 ? '\n':'\t');
	}
}
