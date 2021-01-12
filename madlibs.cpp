#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    string input;

    cout << "Enter a noun: ";
    cin >> input;
    words.push_back(input);
    cout << "Enter a another noun: ";
    cin >> input;
    words.push_back(input);
    cout << "Enter a adjective: ";
    cin >> input;
    words.push_back(input);
    cout << "Enter an \"ing\" verb: ";
    cin >> input;
    words.push_back(input);

    printf("The %s jumped over a %s %s. Then the %s decided to stop being so %s and take up a hobby: %s.\n", &words[0][0], &words[2][0], &words[1][0], &words[1][0], &words[2][0], &words[3][0]);
}
