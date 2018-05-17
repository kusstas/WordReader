#ifndef WORD_READER_H
#define WORD_READER_H

#include <vector>
#include <string>
#include "word.h"

class WordReader
{
public:
    WordReader();
    std::vector<Word> read(std::string const& fileName) const;
};

#endif // WORD_READER_H
