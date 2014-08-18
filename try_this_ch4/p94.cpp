#include <iostream>
#include <vector>
using namespace std;
// 単純な辞書: ソート済みの単語のリスト
int main()
{
	vector<string> 	words;
	string		temp;

	while (cin >> temp)
	{ // ホワイトスペースで区切られた単語を読み取る
		words.push_back(temp);
	}
	cout << "Number of words: " << words.size() << endl;
	sort(words.begin(), words.end());
	for (int i=0; i<words.size(); ++i)
	{
		if (i==0 || words[i-1] != words[i]) { // これは新しい単語か
			cout << words[i] << '\n';
		}
	}
}
