#ifndef TREELIST_H
#define TREELIST_H
#include "TreeNode.hpp"
namespace Containers{
	class TreeList:GenericList<Containers::TreeNode>{
	public:
		Containers::TreeNode* searchByCount(int count);
		Containers::TreeNode* searchByLeaves(Containers::TreeNode* trees);
		void orderByCount();
		void insert(Containers::TreeNode* Node);
	};
}
#endif