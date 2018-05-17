#include "word_weight.h"
#include "word.h"

WordWeight::WordWeight() : m_result(0U)
{
}

void WordWeight::compute(Word const& word)
{
    unsigned int const offset = -('A' - 1);
    for (char s : word.toString()) {
        m_result += s + offset;
    }
}

unsigned int WordWeight::result() const
{
    return m_result;
}
