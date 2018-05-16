#include "word_reader.h"

#include <QString>
#include <QFile>

WordReader::WordReader()
{
}

QVector<Word> WordReader::read(QString const& fileName) const
{
    QFile file(fileName);
    file.open(QFile::ReadOnly | QFile::Text);
    QVector<Word> const& result = read(file);
    file.close();
    return result;
}

QVector<Word> WordReader::read(QFile& file) const
{
    bool word = false;
    QString tmp;
    char s;
    while (!file.atEnd()) {
        file.getChar(s);
        if (word) {

        }
        else if (s == '\"') {
            word = true;
        }
    }
}
