#ifndef COMPRESSER_H
#define COMPRESSER_H
#include "HashTable.hpp"
#include "TreeList.hpp"
namespace GalacticMessenger{
	class Compresser{
	public:
		Containers::TreeList* compress(GalacticMessenger::HashTable words); 
	};
}
#endif