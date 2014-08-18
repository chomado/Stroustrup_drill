#include <iostream>
#include <vector>
// 平均温度と温度の中央値の計算
int main()
{
	std::vector<double> 	temps; 	// 温度
	double			temp;
	
	while (std::cin >> temp) {
		temps.push_back(temp);
	}

	// 平均温度を計算する
	double sum = 0;
	for (int i=0; i<temps.size(); ++i) {
		sum += temps[i];
	}
	std::cout << "Average temperature:\t" << sum/temps.size() << std::endl;

	// 中央値を計算する
	std::sort(temps.begin(), temps.end()); // tempsをbeginからendの順に並び替える
	std::cout << "Median temperature:\t" << temps[temps.size()/2] << std::endl;
}
