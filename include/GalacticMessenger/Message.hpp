#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include "HashTable.hpp"
#include "Compresser.hpp"
#include "TreeList.hpp"
namespace GalacticMessenger{
	class Message{
	public:
		Message();
		void insertWord(std::string word);
		~Message();
		std::string getCode(std::string word);
		int getCount(std::string word);
	private:
		GalacticMessenger::HashTable* words;
		Containers::TreeList* compressedWords;
	};
}
#endif