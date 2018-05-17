#include "session.h"
#include <algorithm>

Session::Session(std::string const& fileName)
    : m_fileName(fileName), m_result(0)
{

}

void Session::execute()
{
    m_result = 0;

    std::vector<Word> words = m_wordReader.read(m_fileName);
    std::sort(words.begin(), words.end());

    size_t pos = 1;
    for (auto const& w : words) {
        m_result += w.weight() * pos++;
    }
}

unsigned long long Session::result() const
{
    return m_result;
}
