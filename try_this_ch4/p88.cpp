#include <iostream>
int my_square(int x) // xの2乗を返す. ただし加算を繰り返す方法で実装する
{
	//return x * x;
	int answer = 0;
	for (int i=0; i<x; i++) {
		answer += x;
	}
	return answer;
}
int main()
{
	std::cout << my_square(14) << std::endl;
}
