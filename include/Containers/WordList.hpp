#ifndef WORDLIST_H
#define WORDLIST_H
#include <string>
namespace Containers{
	class WordList:public Containers::List<Containers::WordNode>{
	public:
		WordList();
		Containers::WordNode* searchWord(std::string word);
		void insert(Containers::WordNode* node) override;
		unsigned int getSize();
		~WordList();
	private:
		unsigned int size;
	}
}

#endif