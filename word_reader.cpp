#include "word_reader.h"

#include <QString>
#include <QFile>

WordReader::WordReader()
{
}

std::vector<Word> WordReader::read(QString const& fileName) const
{
    QFile file(fileName);
    file.open(QFile::ReadOnly | QFile::Text);
    std::vector<Word> const& result = read(file);
    file.close();
    return result;
}

std::vector<Word> WordReader::read(QFile& file) const
{
    std::vector<Word> out;
    bool word = false;
    QString str;
    char s;
    while (!file.atEnd()) {
        file.getChar(&s);
        if (s == '\"') {
            if (word) {
               out.emplace_back(std::move(str));
               str = "";
            }
            word = !word;
        }
        else if (word) {
            str += s;
        }
    }
    return out;
}
