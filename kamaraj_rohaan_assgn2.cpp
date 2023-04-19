/*
Author: Rohaan Kamaraj
Date: 10/1/21
Description: This program will either translate a file of english and output it as morse code into another file, or it will translate
a file of morse code and output it as english into another file. 
Usage: The proper usage is ./morse <input file> <-mc | -e> <output file>
 */

//include all the libararies needed to complete this project :)
#include <iostream>
#include <stdlib.h>

#include <fstream>
#include <string.h>

using namespace std;

//This function takes a character as an input, and outputs the character as it's morse code translation
//It uses a lot of if/else-if statements to accomplish this
const char* englishToMorse(char input) {

  if (input == 'a' || input == 'A') {
     return ".-\0";
  } else if (input == 'b' || input == 'B') {
     return "-...\0";
  } else if (input == 'c' || input == 'C') {
     return "-.-.\0";
  } else if (input == 'd' || input == 'D') {
     return "-..\0";
  } else if (input == 'e' || input == 'E') {
     return  ".\0";
  } else if (input == 'f' || input == 'F') {
     return "..-.\0";
  } else if (input == 'g' || input == 'G') {
     return "--.\0";
  } else if (input == 'h' || input == 'H') {
     return "....\0";
  } else if (input == 'i' || input == 'I') {
     return "..\0";
  } else if (input == 'j' || input == 'J') {
     return ".---\0";
  } else if (input == 'k' || input == 'K') {
     return "-.-\0"; 
  } else if (input == 'l' || input == 'L') {
     return ".-..\0";
  } else if (input == 'm' || input == 'M') {
     return "--\0";
  } else if (input == 'n' || input == 'N') {
     return "-.\0";
  } else if (input == 'o' || input == 'O') {
     return "---\0";
  } else if (input == 'p' || input == 'P') {
     return ".--.\0";
  } else if (input == 'q' || input == 'Q') {
     return "--.-\0";
  } else if (input == 'r' || input == 'R') {
     return ".-.\0";
  } else if (input == 's' || input == 'S') {
     return "...\0";
  } else if (input == 't' || input == 'T') {
     return "-\0";
  } else if (input == 'u' || input == 'U') {
     return "..-";
  } else if (input == 'v' || input == 'V') {
     return "...-\0";
  } else if (input == 'w' || input == 'W') {
     return ".--\0";
  } else if (input == 'x' || input == 'X') {
     return "-..-\0";
  } else if (input == 'y' || input == 'Y') {
     return "-.--\0";
  } else if (input == 'z' || input == 'Z') {
     return "--..\0";
  } 

  return "eeee\0"; // this gets returned if a non alphabet character gets passed in
  
}

//This function takes in a c-string as an argument, and converts it to it's respective alphabet character, and returns that character
//It uses a lot of if, and else-if statements to accomplish this  
char morseToEnglish(const char* str) {

  if (str[0] == '.' && str[1] == '-' && str[2] == '\0') {
    return 'a';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '.' && str[3] == '.') {
    return 'b';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '-' && str[3] == '.') {
    return 'c';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '.' && str[3] == '\0') {
    return 'd';
  } else if (str[0] == '.' && str[1] == '\0') {
    return 'e';
  } else if (str[0] == '.' && str[1] == '.' && str[2] == '-' && str[3] == '.') {
    return 'f';
  } else if (str[0] == '-' && str[1] == '-' && str[2] == '.' && str[3] == '\0') {
    return 'g';
  } else if (str[0] == '.' && str[1] == '.' && str[2] == '.' && str[3] == '.') {
    return 'h';
  } else if (str[0] == '.' && str[1] == '.' && str[2] == '\0') {
    return 'i';
  } else if (str[0] == '.' && str[1] == '-' && str[2] == '-' && str[3] == '-') {
    return 'j';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '-' && str[3] == '\0') {
    return 'k';
  } else if (str[0] == '.' && str[1] == '-' && str[2] == '.' && str[3] == '.') {
    return 'l';
  } else if (str[0] == '-' && str[1] == '-' && str[2] == '\0') {
    return 'm';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '\0') {
    return 'n';
  } else if (str[0] == '-' && str[1] == '-' && str[2] == '-' && str[3] == '\0') {
    return 'o';
  } else if (str[0] == '.' && str[1] == '-' && str[2] == '-' && str[3] == '.') {
    return 'p';
  } else if (str[0] == '-' && str[1] == '-' && str[2] == '.' && str[3] == '-') {
    return 'q';
  } else if (str[0] == '.' && str[1] == '-' && str[2] == '.' && str[3] == '\0') {
    return 'r';
  } else if (str[0] == '.' && str[1] == '.' && str[2] == '.' && str[3] == '\0') {
    return 's';
  } else if (str[0] == '-' && str[1] == '\0') {
    return 't';
  } else if (str[0] == '.' && str[1] == '.' && str[2] == '-' && str[3] == '\0') {
    return 'u';
  } else if (str[0] == '.' && str[1] == '.' && str[2] == '.' && str[3] == '-') {
    return 'v';
  } else if (str[0] == '.' && str[1] == '-' && str[2] == '-' && str[3] == '\0') {
    return 'w';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '.' && str[3] == '-') {
    return 'x';
  } else if (str[0] == '-' && str[1] == '.' && str[2] == '-' && str[3] == '-') {
    return 'y';
  } else if (str[0] == '-' && str[1] == '-' && str[2] == '.' && str[3] == '.') {
    return 'z';
  } else if (str[0] == 'e' && str[1] == 'e' && str[2] == 'e' && str[3] == 'e') {
    return '#';
  } else if (str[0] == '/' && str[1] == '\0') {
    return ' ';
  }

  return '#';
}


int main(int argc, char* argv[]) {

  //If no input file name is provided
  if (argv[1] == NULL) {
    cout << "Need to pass input file name!" << endl;
    return 0;
  }

  //If no [-mc] or [-e] is provided
  if (argv[2] == NULL) {
    cout << "[-mc] or [-e]" << endl;
    return 0;
  }

  //If no output file name is provided
  if (argv[3] == NULL) {
    cout << "Need to pass output file name!" << endl;
    return 0;
  }

  //This runs only if the -mc argument is passed
  if (strcmp(argv[2], "-mc") == 0) {
  
    ifstream infile; 
    infile.open(argv[1]); //opens a file stream from the input file passed

    ofstream outfile;
    outfile.open(argv[3]); //opens a file stream to the output file, which name is provided by the user

    char* str1 = new char[255]; // creates a dynamically allocated C-String
  
    while (infile.getline(str1,255,'\n')) { // This while loop will keep running as long as there are more lines in the file
      char* token;

      int track = 0;
      int whitespace = 0;
      
      //I need this for loop to determine how many spaces there are in the line, because I need to use the information to make sure that a '|'
      //is not added to the end of the output line.
      for (int i = 0; i < strlen(str1); i++) {
	if (str1[i] == ' ') {
	  whitespace++;
	}
      }

      //This block of code splits the line into seperate words, and then passes each individual character in those words to the englishToMorse function
      int len = strlen(str1) - whitespace;
      token = strtok(str1, " ");
      while (token != NULL) { // While loop runs as long as the token doesn't become null
	for (int i = 0; i < strlen(token); i++) {
	  outfile << englishToMorse(token[i]);
	  track++;
	  if (track != len) { // This makes sure that a '|' is not added to the end of the output line
	    outfile << '|';
	  }
	}
	token = strtok(NULL, " ");
	if (track != len) { // This makes sure that a '\' and '\' is not added at the end of the output line
	  outfile << '/' << '|';
	}
      }
      outfile << '\n';
    }

    // Closes the ifstream and ofstream
    infile.close();
    outfile.close();
    
    // Delete the dynamically allocated array
    delete[] str1; 
 
  }
  
  //This if statement will only be true if the user passes in a "-e" argument
  if (strcmp(argv[2], "-e") == 0) {
    
    ifstream infile2;
    infile2.open(argv[1]); // open the input file

    ofstream outfile2;
    outfile2.open(argv[3]); // create an output file

    char* str2 = new char[255]; // Dynamically allocated C-String

    while (infile2.getline(str2, 1785, '\n')) {
      char* token2;

      token2 = strtok(str2, "|"); // This will divide the line entered by using | as the delimiter

      while (token2 != NULL) { // This while loop will keep running as long as token2 isn't null 
	outfile2 << morseToEnglish(token2); // This will call the morseToEnglish function
	token2 = strtok(NULL, "|");
      }
      outfile2 << '\n';
   }

    // Closes the ifstream and ofstream
    infile2.close();
    outfile2.close();

    //Delete the dynamically allocated array
    delete[] str2;
  }

  return 0; // Signals the end of the main function

  
}
