#include <iostream>
#include <string>
#include "functions.hpp"

int main(){
  std::string word = "farts";
  std::string text = "I sure do like me some broccoli. BOY do I LOVE broccoli. smell like farts tho";

  bleep(word, text);

  std::cout << text <<"\n";
}
