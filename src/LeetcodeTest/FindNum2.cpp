/*
��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������

ʾ��:
���о��� matrix ���£�
[
[1, 4, 7, 11, 15],
[2, 5, 8, 12, 19],
[3, 6, 9, 16, 22],
[10, 13, 14, 17, 24],
[18, 21, 23, 26, 30]
]
���� target = 5������ true��
���� target = 20������ false��

���ƣ�
0 <= n <= 1000
0 <= m <= 1000
*/

#include <vector>

bool findNumberIn2DArray(std::vector<std::vector<int>>& matrix, int target)
{
	if (matrix.empty())
		return false;

	int row = matrix.size();
	int col = matrix[0].size();

	int i = 0;
	int j = col - 1;

	while (true)
	{
		if (i < 0 || i >= row || j < 0 || j >= col)
			break;

		if (matrix[i][j] == target)
			return true;
		else if (matrix[i][j] > target)
			j--;
		else
			i++;
	}

	return false;
}