#pragma once
extern void ListForEach(const vector<int> &vec);
extern void error_message(initializer_list<string> msg, const char *file, const char *func);
extern void ListForEach(const vector<string> &vec, int);
extern bool Judgeupper(const string &str);
extern bool StrChangUpper2Lower(string &str);
extern void My_Exception(int x, int y);
extern void PrintTypeLength();
extern int(*ReturnArrayPointer())[10];
extern const string& ShorterString(const string &str1, const string &str2);
extern string& ShorterString(string &str1, string &str2);

/* Ĭ�ϲ����Ķ������ */
extern int DefaultParam(int x, int y = 45);
extern int DefaultParam(int x = 78, int y);

/* �������� */
inline int InlineFunc(int x)
{
	cout << x << endl;
	return 45;
}

/* constexpr ���� */
constexpr int test(int x)
{
	x = 45;
	return 0;
}
