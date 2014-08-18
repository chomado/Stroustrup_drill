#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 嫌いな単語だったらビープ音でかき消す, ための, もし嫌いな単語だったらtrue を返す
bool check_disliked(string word)
{
	// 嫌いな単語のリスト
	const string disliked[3] = {"fat", "ugly", "loveless"};
	
	for (int i=0; i<3; i++) {
		if (word == disliked[i])
			return true;
	}
	return false;
}

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
			cout << (check_disliked(words[i]) ? "BEEP!" : words[i]) << '\n';
		}
	}
}
