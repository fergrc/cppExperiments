#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_Hobby("listening to audiobooks and podcasts");
  sam.add_Hobby("playing rec sports like bowling and kickball");
  sam.add_Hobby("writing a speculative fiction novel");
  sam.add_Hobby("reading advice columns");
  std::cout << sam.view_Profile();

}
