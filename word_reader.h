#ifndef WORD_READER_H
#define WORD_READER_H

#include <QVector>
#include "word.h"

class QString;
class QFile;

class WordReader
{
public:
    WordReader();
    QVector<Word> read(QString const& fileName) const;
    QVector<Word> read(QFile& file) const;
};

#endif // WORD_READER_H
