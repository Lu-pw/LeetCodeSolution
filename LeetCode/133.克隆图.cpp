#include "header.h"

/*

����������ͨͼ��һ���ڵ�����ã����ظ�ͼ���������¡����
ͼ�е�ÿ���ڵ㶼��������ֵ val��Int�������ھӵ��б�list[Node]����
 
   1 ------- 2
   |         |
   |         |
   |         |
   4 ------- 3

*/


//Definition for undirected graph.
struct UndirectedGraphNode {
    int label;
	vector<UndirectedGraphNode *> neighbors;
	UndirectedGraphNode(int x) : label(x) {};
};

class Solution {
public:
	unordered_map< UndirectedGraphNode *, UndirectedGraphNode *> copies;
	UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node)
	{
		if (!node)
		{
			return nullptr;
		}
		if (!copies.count(node))
		{
			copies[node] = new UndirectedGraphNode(node->label);
			for (auto neighbor : node->neighbors)
			{
				copies[node]->neighbors.push_back(cloneGraph(neighbor));
			}
		}
		return copies[node];
	}
};
