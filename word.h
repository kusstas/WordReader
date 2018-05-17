#ifndef WORD_H
#define WORD_H

#include <string>
#include "word_weight.h"

class Word
{
public:

    Word(std::string const& word);
    Word(std::string&& word);

    Word(Word const& word) = default;
    Word(Word&& word) = default;

    Word& operator = (Word const& word) = default;
    Word& operator = (Word&& word) = default;

    std::string const& toString() const;
    unsigned int weight() const;

private:

    std::string m_str;
    WordWeight m_weight;
};

bool operator < (Word const& l, Word const& r);

#endif // WORD_H
