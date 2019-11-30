#ifndef WORDNODE_H
#define WORDNODE_H
namespace Containers{
	class WordNode: public Containers::Node{
	public:
		WordNode();
		void setCode(std::string newCode);
		void setNext(WordNode* next);
		std::string getCode();
		WordNode* getNext();
	private:
		std::string code;
		WordNode* next;
	} 
}
#endif