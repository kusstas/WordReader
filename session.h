#ifndef SESSION_H
#define SESSION_H

#include <QString>
#include "word_reader.h"


class Session
{
public:

    Session(QString const& fileName);

    void execute();
    size_t result() const;

private:

    WordReader m_wordReader;
    QString m_fileName;

    size_t m_result;
};

#endif // SESSION_H
