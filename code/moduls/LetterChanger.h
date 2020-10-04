//
// Created by gfdsr on 04-Oct-20.
//

#ifndef LAB2_LETTERCHANGER_H
#define LAB2_LETTERCHANGER_H

#include "../LibReference.h"

using namespace std;

class LetterChanger {
public:
    string StringToLower(string text) {
        string lowerText;

        unsigned int length = text.length();
        for (int i = 0; i < length; i++) {

            char l = text[i];
            l = asciitolower(l);
            lowerText += l;
        }
        return lowerText;
    }

private:
    char asciitolower(char in) {
        if (in <= 'Z' && in >= 'A')
            return in - ('Z' - 'z');
        return in;
    }

};


#endif //LAB2_LETTERCHANGER_H
