#include <iostream>
#include <string>
using namespace std;

int main() {
    string noun1;
    string noun2;
    string adj1;
    string ingVerb1;

    cout << "Enter a noun: ";
    cin >> noun1;
    cout << "Enter a another noun: ";
    cin >> noun2;
    cout << "Enter a adjective: ";
    cin >> adj1;
    cout << "Enter an \"ing\" verb: ";
    cin >> ingVerb1;

    printf("The %s jumped over a %s %s. Then the %s decided to stop being so %s and take up a hobby: %s.\n", &noun1[0], &adj1[0], &noun2[0], &noun2[0], &adj1[0], &ingVerb1[0]);
}
