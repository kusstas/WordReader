#ifndef WORD_H
#define WORD_H

#include <QString>
#include "word_weight.h"

class Word
{
public:

    Word(QString const& word);
    Word(QString&& word);

    QString const& toString() const;
    unsigned int weight() const;

private:

    QString m_str;
    WordWeight m_weight;
};

bool operator < (Word const& l, Word const& r);

#endif // WORD_H
