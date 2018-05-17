#include "word.h"
#include <utility>

Word::Word(std::string const& word) : m_str(word)
{
    m_weight.compute(*this);
}

Word::Word(std::string&& word) : m_str(std::move(word))
{
    m_weight.compute(*this);
}

std::string const& Word::toString() const
{
    return m_str;
}

unsigned int Word::weight() const
{
    return m_weight.result();
}

bool operator < (Word const& l, Word const& r)
{
    return l.toString() < r.toString();
}
