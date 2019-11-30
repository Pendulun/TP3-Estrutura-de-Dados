#ifndef NODE_H
#define NODE_H
#include <string>
namespace Containers{
	class Node{
	public:
		Node();
		void setCount(int newCount);
		void setWord(std::string newWord);
		int getCount();
		std::string getWord();
	private:
		int count;
		std::string word;
	};
}
#endif