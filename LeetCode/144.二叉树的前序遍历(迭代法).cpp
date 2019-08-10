#include "header.h"

/*

����һ������������������ǰ�����,ͨ�������㷨���

*/

class Solution {
public:
	vector<int> preorderTraversal(TreeNode *root)
	{
		if (!root) return{};
		vector<int> res;
		stack<TreeNode *> s;
		TreeNode *node = root;
		while (!s.empty() || node)
		{
			if (node)
			{
				res.push_back(node->val);
				if (node->right)
					s.push(node->right);
				node = node->left;
			}
			else
			{
				node = s.top();
				s.pop();
			}
		}
		return res;
	}
};
