//Program to count number of words in a sentence.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    cout << "Write a Sentence! : ";
    getline(cin, sentence); // Read the entire sentence including spaces

    int wordCount = 0;
    bool inWord = false;

    // Iterate through each character in the sentence
    for (char c : sentence) 
    {
        // Check if the character is a letter
        if (isalpha(c)) 
        {
            // If not already in a word, increment the word count
            if (!inWord) 
            {
                wordCount++;
                inWord = true;
            }
        } else {
            // If it's not a letter, mark that we're not in a word
            inWord = false;
        }
    }

    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}
