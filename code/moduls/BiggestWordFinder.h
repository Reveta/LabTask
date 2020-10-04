//
// Created by gfdsr on 04-Oct-20.
//

#ifndef LAB2_BIGGESTWORDFINDER_H
#define LAB2_BIGGESTWORDFINDER_H

#include "../LibReference.h"

using namespace std;

class BiggestWordFinder {
public:
    string Find(string text) {
        string biggestWord;
        int sizeBiggestWord = 0;

        const list<string> words = SplitBySpace(text);

        for (string word : words) {
            int size = word.length();

            if (sizeBiggestWord < size) {
                biggestWord = word;
                sizeBiggestWord = size;
            }
        }

        return biggestWord;
    }

private:
    list<string> SplitBySpace(string text) {
        list<string> strings;
        string wordContainer;

        for (int i = 0; i < text.length(); i++) {
            const char letter = text[i];
            if (letter == ' ') {
                strings.push_back(wordContainer);
                wordContainer = "";

            } else {
                wordContainer = wordContainer + letter;
            }
        }

        strings.push_back(wordContainer);
        return strings;
    }

};


#endif //LAB2_BIGGESTWORDFINDER_H
