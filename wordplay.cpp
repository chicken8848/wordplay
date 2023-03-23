#include <array>
#include <iostream>
using namespace std;

string reverseword(string word) {
  string reversed_word = "";
  for (int i = word.length() - 1; i >= 0; i--) {
    cout << word[i];
    reversed_word += word[i];
  }
  return reversed_word;
}

int main() {
  string string1;
  cout << "Enter your word" << endl;
  cin >> string1;
  cout << "Your word backwards" << endl;
  reverseword(string1);
  return 0;
}
