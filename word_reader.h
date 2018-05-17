#ifndef WORD_READER_H
#define WORD_READER_H

#include <vector>
#include "word.h"

class QString;
class QFile;

class WordReader
{
public:
    WordReader();
    std::vector<Word> read(QString const& fileName) const;
    std::vector<Word> read(QFile& file) const;
};

#endif // WORD_READER_H
