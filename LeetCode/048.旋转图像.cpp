#include "header.h"

/*

你必须在原地旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要使用另一个矩阵来旋转图像。

示例 1:
给定 matrix =
[
[1,2,3],
[4,5,6],
[7,8,9]
]
原地旋转输入矩阵，使其变为:
[
[7,4,1],
[8,5,2],
[9,6,3]
]

示例 2:
给定 matrix =
[
[ 5, 1, 9,11],
[ 2, 4, 8,10],
[13, 3, 6, 7],
[15,14,12,16]
]
原地旋转输入矩阵，使其变为:
[
[15,13, 2, 5],
[14, 3, 4, 1],
[12, 6, 8, 9],
[16, 7,10,11]
]

*/

class Solution {
public:
	void rotate(vector<vector<int>> &matrix)
	{
		if (matrix.empty() || matrix[0].empty())
			return;
		int len = matrix.size();
		reverse(matrix.begin(), matrix.end());
		for (int i = 0; i < len; ++i)
			for (int j = i + 1; j < len; ++j)
				swap(matrix[i][j], matrix[j][i]);
	}
};