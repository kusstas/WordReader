#ifndef WORD_WEIGHT_H
#define WORD_WEIGHT_H

class Word;

class WordWeight
{
public:

    WordWeight();
    void compute(Word const& word);
    unsigned int result() const;

private:
    unsigned int m_result;
};

#endif // WORD_WEIGHT_H
