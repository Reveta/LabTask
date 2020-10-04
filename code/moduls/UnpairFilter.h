//
// Created by gfdsr on 04-Oct-20.
//

#ifndef LAB2_UNPAIRFILTER_H
#define LAB2_UNPAIRFILTER_H

#include "../LibReference.h"

using namespace std;

class UnpairFilter {
public:
    string GetFilteredWords(string text) {

        string wordsWOOddCountConsonant;
        const list<string> &words = SplitBySpace(text);
        for (string word : words) {
            int count = GetCountConsonantLetters(word);
            if (count % 2 == 0) {
                wordsWOOddCountConsonant += word;
            }
        }

        return wordsWOOddCountConsonant;
    }

private:
    int GetCountConsonantLetters(string word) {
        int oddCount = 0;
        for (char letter : word) {
            if(IsConsonant(letter)){
                oddCount++;
            }
        }

        return oddCount;
    };

    bool IsConsonant(char letter) {
        char consonant_letters[] =
                {'b', 'c', 'd', 'f', 'g', 'h', 'j',
                 'k', 'l', 'm', 'n', 'q', 'r', 's',
                 't', 'v', 'w', 'x', 'z'};

        for(char consonant : consonant_letters){
            if(consonant == letter){
                return true;
            };
        }
        return false;
    }

    list<string> SplitBySpace(string text) {
        list<string> strings;
        string wordContainer;

        for (int i = 0; i < text.length(); i++) {
            const char letter = text[i];
            if (letter == ' ') {
                strings.push_back(wordContainer + " ");
                wordContainer = "";

            } else {
                wordContainer = wordContainer + letter;
            }
        }

        strings.push_back(wordContainer);
        return strings;
    }

};

#endif //LAB2_UNPAIRFILTER_H
