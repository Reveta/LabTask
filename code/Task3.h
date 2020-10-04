//
// Created by gfdsr on 04-Oct-20.
//

#ifndef LAB2_TASK3_H
#define LAB2_TASK3_H

#include "moduls/LetterChanger.h"
#include "moduls/BiggestWordFinder.h"
#include "moduls/UnpairFilter.h"
#include "LibReference.h"

using namespace std;

class Task3 {
    LetterChanger letterChanger;
    BiggestWordFinder biggestWordFinder;
    UnpairFilter unpairFilter;
    
public:
    void Run() {
        const string &text = GetLineFromConsole();
        const string &lower = letterChanger.StringToLower(text);
        const string &theBiggest = biggestWordFinder.Find(text);
        const string &filteredWords = unpairFilter.GetFilteredWords(text);

        ShowAnswer(lower, theBiggest, filteredWords);
    }

private:
    string GetLineFromConsole() {
        string text;
        getline(cin >> ws, text);
        return text;
    }

    void ShowAnswer(
            string lowerText,
            string biggestWord,
            string unpairWords){
        cout << "LowerText: [" + lowerText + "]" << endl;
        cout << "The Biggest word: [" + biggestWord + "]" << endl;
        cout << "Unpair words: [" + unpairWords + "]" << endl;

    }
};


#endif //LAB2_TASK3_H
