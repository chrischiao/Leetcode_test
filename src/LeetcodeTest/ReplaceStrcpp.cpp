/*
��ʵ��һ�����������ַ��� s �е�ÿ���ո��滻��"%20"��

ʾ�� 1��
���룺s = ��We are happy.��
�������We%20are%20happy.��

���ƣ�
0 <= s �ĳ��� <= 10000
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