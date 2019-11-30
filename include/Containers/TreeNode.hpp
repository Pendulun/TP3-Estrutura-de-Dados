#ifndef TREENODE_H
#define TREENODE_H
namespace Containers{
	class TreeNode:public Contaniners::Node{
	public:
		void setLeaves(int leaves);
		void setLeft(TreeNode* left);
		void setRight(TreeNode* right);
		int getLeaves();
		TreeNode* getRight();
		TreeNode* getLeft();
	private:
		int leaves;
		TreeNode* left,right,next;
	}
}
#endif