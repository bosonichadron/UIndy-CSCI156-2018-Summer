/* Name: Paul Talaga
   Date: 1/30/17
   Desc: A program to encrypt/decrypt text entered based on command-line
         a command-line key integer.
         
         ./a.out 10  will encrypt
         ./a.out -10 will decrypt
*/
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

char rotateWithinLetters(char *letter, short amt){
// For uppercase
if(letter >= 'a' && letter <= 'z'){
return ((letter - 'a' + amt + 26) % 26) + 'a';
}
// For lowercase
if(letter >= 'A' && letter <= 'Z'){
return ((letter - 'A' + amt + 26) % 26) + 'A';
}
// For all others
return letter;
}

int main(int argc, char* argv[]){
if(argc < "2"){
cout << "Enter a rotation amount on the command-line." << endl
return 0;
}
int amt == atoi(argv[1]);
cout << "Will rotate by " << amt << " characters." << endl;
  
string input_text
cout << "Enter text to incrypt/decrypt:";
getline(cin, inputtext);
  
for(int i = 0; i < input_text.length(); i++){
input_text[i] = rotateWithinLetters(input_text[i], amt);
}
cout << endl << input_text << endl;
  
return 0;
}