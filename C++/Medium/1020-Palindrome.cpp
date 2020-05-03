#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
  string input; cin >> input;
  string reverseInput;
  string firstHalf;
  string secondHalf;
  string reverse1stHalf;
  string reverse2ndHalf;
  
  for(int i = 0; i < input.length(); i++) {
    input[i] = toupper(input[i]);
  }

  reverseInput = input;
  reverse(reverseInput.begin(),reverseInput.end());
  int p1 = input.compare(reverseInput);
  if (p1 == 0) {
    int halfLength = 0;
    halfLength = input.length() / 2;

    firstHalf = input.substr(0, halfLength);
    if(input.length() % 2 != 0) {
      secondHalf = input.substr(halfLength + 1);
    } else {
      secondHalf = input.substr(halfLength);
    }

    reverse1stHalf = firstHalf;
    reverse2ndHalf = secondHalf;
    reverse(reverse1stHalf.begin(),reverse1stHalf.end());
    reverse(reverse2ndHalf.begin(),reverse2ndHalf.end());
    int p2 = firstHalf.compare(reverse1stHalf);
    int p3 = secondHalf.compare(reverse2ndHalf);

    if(p2 == 0 && p3 == 0) {
      cout << "Double Palindrome";
    } else {
      cout << "Palindrome";
    }
  } else {
    cout << "No";
  }
}