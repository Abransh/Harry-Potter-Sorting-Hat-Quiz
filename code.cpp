#include <iostream>

int main() {

  // The magic starts here
  int gryffindor = 0 ; 
  int hufflepuff = 0 ; 
  int ravenclaw  = 0 ; 
  int slytherin  = 0 ; 

  int answer1 = 0 ; 
  int answer2 = 0 ; 
  int answer3  = 0 ; 
  int answer4  = 0 ; 

  std::cout << "The Sorting Hat Quiz!\n"; 

 std::cout << "Q1) When I'm dead, I want people to remember me as:" << "1) The Good\n"<< "2) The Great\n" << "3) The Wise\n" << "4) The Bold\n";

 std::cin >> answer1; 

 if(answer1 == 1) {
    hufflepuff++ ; 
}

else if(answer1 == 2)
{
 slytherin++ ; 
}
else if(answer1 == 3)
{
 ravenclaw++ ; 
}
else if(answer1 == 4)
{
 gryffindor++ ; 
}
else {
  std::cout <<"invalid output\n"; 
}



std::cout << "Q2) Dawn or Dusk?\n" << 

  "1) Dawn\n"<<
  "2) Dusk\n" ; 

std::cin >> answer2; 

if(answer2 == 1) {
    hufflepuff++ ; 
    ravenclaw++; 
}

else if(answer1 == 2)
{
 slytherin++ ; 
 hufflepuff++; 
}
else {
  std::cout <<"invalid output\n"; 
}

std::cout << "Q3) Which kind of instrument most pleases your ear?\n" <<

  "1) The violin\n" <<
  "2) The trumpet\n" <<
  "3) The piano\n" <<
  "4) The drum\n" ; 

 std::cin >> answer3; 

 if(answer3 == 2) {
    hufflepuff++ ; 
}

else if(answer3 == 1)
{
 slytherin++ ; 
}
else if(answer3 == 3)
{
 ravenclaw++ ; 
}
else if(answer3 == 4)
{
 gryffindor++ ; 
}
else {
  std::cout <<"invalid output\n"; 
}

 std::cout << "Q4) Which road tempts you most?\n"<<

  "1) The wide, sunny grassy lane\n"<<
  "2) The narrow, dark, lantern-lit alley\n"<<
  "3) The twisting, leaf-strewn path through woods\n"<<
  "4) cobbled street\n"; 

  std::cin >> answer4; 

 if(answer4 == 1) {
    hufflepuff++ ; 
}

else if(answer4 == 2)
{
 slytherin++ ; 
}
else if(answer4 == 4)
{
 ravenclaw++ ; 
}
else if(answer4 == 3)
{
 gryffindor++ ; 
}
else {
  std::cout <<"invalid output\n"; 
}

std::string house; 
int max = 0; 

if(gryffindor > max ){
  max = gryffindor; 
  house = "gryffindor"; 

}
if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << house << "!\n";

}

