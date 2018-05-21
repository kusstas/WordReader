#include "word_reader.h"
#include <fstream>
#include <limits>

WordReader::WordReader()
{
}

std::vector<Word> WordReader::read(std::string const& fileName) const
{
    std::ifstream input(fileName);
    std::vector<Word> out;

    while (input.peek() != EOF) {
        input.ignore(std::numeric_limits<std::streamsize>::max(), delim);
        std::string tmp;
        std::getline(input, tmp, delim);
        out.emplace_back(tmp);
    }

    input.close();
    return out;
}
