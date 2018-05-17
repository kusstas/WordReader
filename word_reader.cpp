#include "word_reader.h"
#include <fstream>

#include <QDebug>


WordReader::WordReader()
{
}

std::vector<Word> WordReader::read(std::string const& fileName) const
{
    std::ifstream input(fileName);
    std::vector<Word> out;

    char const delim = '\"';
    while (input.peek() != EOF) {
        char s = input.get();
        if (s == delim) {
            std::string tmp;
            std::getline(input, tmp, delim);
            out.emplace_back(tmp);
        }
    }

    input.close();
    return out;
}
