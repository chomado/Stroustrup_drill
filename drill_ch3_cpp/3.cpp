// 何もしないが, 
// 有効な名前がついた変数と
// 無効な名前がついた変数(int double = 0;など)
// を宣言するプログラムを記述して, コンパイラがどう反応するか確認せよ.
int main()
{
	int safe_value = 0;
	int double = 0;
}
/*
 * % g++ 3.cpp
 * 3.cpp:8:6: error: cannot combine with previous 'int' declaration specifier
 *         int double = 0;
 *             ^
 * 3.cpp:8:13: error: expected unqualified-id
 *         int double = 0;
 *                    ^
 * 2 errors generated.
 * /
