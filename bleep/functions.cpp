#include <iostream>
#include <string>

void bleep(std::string &word, std::string &text) {
  
  // continue to replace with asterisks until no more matches are found
  // .find() allows you to find a substring in a given string
  while (text.find(word) != -1){
    int index = text.find(word);
    // loops that iterates over the lenght of the word
    // replaces the word with asterisk
    for (int i = 0; i < word.size(); i++){
      text[index+i] = '*';
  }
  }
}
