/*
A little text adventure based on the Front Prince fairy tale 
*/

#include <iostream>
#include <stdlib.h>

// Introduction

int main() {
	
	int tries = 0;
	srand (time(NULL));
	int throws = rand() % 8 + 1;
	char t;
  int answer;
  int points = 0;
	
  std::cout << "~~~~~~~~~~~~~~~~~ CHAPTER 1 ~~~~~~~~~~~~~~~~~\n";
	std::cout << "What a beautiful day to play with your big golden ball!\n";
	std::cout << "Enter [T] to throw your ball!\n";
	std::cin >> t;
	
	if (t == 't') {
		
		while (tries != throws){
			std::cout << "Bounce Bounce!\n";
			std::cout << "Enter [T] to throw again\n";
			std::cin >> t;
			
			if (t == 't'){
				tries++;
			}
			else {
				std::cout << "Invalid Output.\nGAME OVER\n";
			}
			}	
	
		std::cout << "Bounce Bounce!\n\n" << "Oh no! Your precious golden ball fell inside the garden pond!!\n\n";
	}
	else {
		std::cout << "Invalid Output.\nGAME OVER\n";
	}
  std::cout << "~~~~~~~~~~~~~~~~~ CHAPTER 2 ~~~~~~~~~~~~~~~~~\n";
  std::cout << "A little frog comes out of the pond.\n";
	std::cout << "\"Ribbit Ribbit.\" It says.\n\"Will you be my valentine if I return your golden ball?\"\n";
  
  std::cout << "1) Yes\n";
  std::cout << "2) Of course!\n";
  std::cout << "3) ABSOLUTELY\n";
  std::cin >> answer;
  
  if (answer == 1){
    points++;
  }
  else if (answer == 2){
    points++;
    points++;
  }
  else if (answer == 3){
    points++;
    points++;
    points++;
  }
  else {
    std::cout << "Invalid Output.\nGAME OVER\n";
  }
  
  std::cout << "~~~~~~~~~~~~~~~~~ CHAPTER 3 ~~~~~~~~~~~~~~~~~\n";
  std::cout << "\"Ribbit Ribbit! How exciting!\" The little frog hops around with joy...\nHe takes you out on a date the following day:\nthe magical forest's fanciest restaurant!!\n\nWhat do you order?\n";
  std::cout << "1) Pasta Carbonara.\n";
  std::cout << "2) Frog Legs.\n";
  std::cout << "3) Sautéed Bugs with Mushrooms.\n";
  std::cin >> answer;  
  
  if (answer == 1){
    points++;
    std::cout << "A fine choice!\" he ribbits.\n";
  }
  else if (answer == 2){
    points--;
    std::cout << "Uhhhhhh, ok.\" he ribbits.\n";
  }
  else if (answer == 3){
    points++;
    points++;
    std::cout << "He seems surprised, but overwhelmingly happy! He lets out a flutered \"ribbit\"\n\n";
  }
  else {
    std::cout << "Invalid Output.\nGAME OVER\n";
  }
  
  std::cout << "~~~~~~~~~~~~~~~~~ CHAPTER 4 ~~~~~~~~~~~~~~~~~\n";
  std::cout << "You two go for a walk around the pond. A little snail is on the path!\nWhat do you do?\n";
  std::cout << "1) Gently pick it up and put it on the grass.\n";
  std::cout << "2) Violently smash it with your foot.\n";
  std::cout << "3) Walk around it.\n";
  std::cin >> answer;  
  
  if (answer == 1){
    points++;
    points++;
    std::cout << "He smiles gently. How kind of you!\n";
  }
  else if (answer == 2){
    points--;
    std::cout << "He seems a little tense. Maybe you should have left it alone....\n";
  }
  else if (answer == 3){
    std::cout << "Good luck little snail! You two go on your merry way.\n";
  }
  else {
    std::cout << "Invalid Output.\nGAME OVER\n";
  }
  
  std::cout << "~~~~~~~~~~~~~~~~~ CHAPTER 5 ~~~~~~~~~~~~~~~~~\n";
  std::cout << "\"You've reached a clearing. The evening air greets you and you hear a choir of crickets begin their ensemble.\n";
  std::cout << "1) Kiss him.\n";
  std::cout << "2) Kiss him.\n";
  std::cout << "3) Kiss him.\n";
  std::cin >> answer;  
  
  if (points == 7) {
    std::cout << "You kiss the little frog, and to your surprise, he turns into a......!\n" << "Handsome Frog Prince!!!\n" << "He still looks kinda froggy but you find it quite charming at this point.\nYou were truly made for each other: you see it clearly now, and so does he!\nYou move into his castle in the pond and you live happily ever after.\n";
      std::cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 THE END <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n";
  }
  else if (points < 7 && points > -1) {
    std::cout << "You are both a little unsure at first, but something magical happened with this kiss.\n" << "A little spark, if you will.\n" << "You both decide to go on a second date. Perhaps this is the beggining of a beautiful relationship??\n" ;
    std::cout << "THE END\n";
  }
  else if (points == -1) {
    std::cout << "He backs out suddenly.\n" << "\"Uhhhhhhhh no thanks! I don't think this is gonna work out sorry!\"\n";
    std::cout << "He jumps back into the pond. You wonder what went wrong, it felt like it was going so well.\nYou feel your heart ache a little bit.\n\nGAME OVER\n";
}
}
