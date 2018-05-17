#ifndef SESSION_H
#define SESSION_H

#include <string>
#include "word_reader.h"


class Session
{
public:

    Session(std::string const& fileName);

    void execute();
    size_t result() const;

private:

    WordReader m_wordReader;
    std::string m_fileName;

    size_t m_result;
};

#endif // SESSION_H
