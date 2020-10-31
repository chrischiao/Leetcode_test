/*
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

示例 1：
输入：s = “We are happy.”
输出：“We%20are%20happy.”

限制：
0 <= s 的长度 <= 10000
*/


#include <string>

std::string replaceSpace(std::string s)
{
	int len = s.length();
	const char* p = s.c_str();
	int count = 0;
	while (*p != '\0')
	{
		if (*p++ == ' ')
			count++;
	}

	int newLen = len + count * 2;
	s.resize(newLen);

	for (int i = newLen - 1, j = len - 1; i > j; i--, j--)
	{
		if (s[j] == ' ')
		{
			s[i] = '0';
			s[--i] = '2';
			s[--i] = '%';
		}
		else
		{
			s[i] = s[j];
		}
	}
	return s;
}