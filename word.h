#ifndef WORD_H
#define WORD_H

#include <QString>
#include "word_weight.h"

class Word
{
public:

    Word(QString const& word);
    Word(QString&& word);

    Word(Word const& word) = default;
    Word(Word&& word) = default;

    Word& operator = (Word const& word) = default;
    Word& operator = (Word&& word) = default;

    QString const& toString() const;
    unsigned int weight() const;

private:

    QString m_str;
    WordWeight m_weight;
};

bool operator < (Word const& l, Word const& r);

#endif // WORD_H
