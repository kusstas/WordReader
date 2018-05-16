#include "word.h"
#include <utility>

Word::Word(QString const& word) : m_str(word)
{
    m_weight.compute(*this);
}

Word::Word(QString&& word) : m_str(std::move(word))
{
    m_weight.compute(*this);
}

QString const& Word::toString() const
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
