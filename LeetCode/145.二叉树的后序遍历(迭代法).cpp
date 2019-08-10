#include "header.h"

/*

����һ�����������������ĺ��������
ʹ�õ����㷨��ɡ�

*/

class Solution {
public:
	vector<int> postorderTraversal(TreeNode *root)
	{
		if (!root) return{};
		vector<int> res;
		stack<TreeNode *> s;
		TreeNode *node = root;
		s.push(node);
		while (!s.empty())
		{
			if (s.top()->left != node&&s.top()->right != node)
			{
				while (TreeNode *x = s.top())
				{
					if (x->left)
					{
						if (x->right)
							s.push(x->right);
						s.push(x->left);
					}
					else
						s.push(x->right);
				}
				s.pop();
			}
			node = s.top();
			s.pop();
			res.push_back(node->val);
		}
		return res;
	}
};