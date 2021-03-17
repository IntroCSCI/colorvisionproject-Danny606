//Author: Daniel Espinoza-Cardenas
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  //Variables
  string color;
  string filename = "";
  string line = "";

  fstream reader;

  //Get user input
  cout << "Please enter a color palette file to be opened:\n";
  cin >> filename;

  //open file
  reader.open(filename,ios::in);

  if(reader.is_open()){
    while(!reader.eof()){
      getline(reader,line);
      cout << line << endl;
      cout << filename << " has been selected.\n" << endl;
     }
    reader.close();
  } 
  else{
    cout << "Could not open " << filename << endl;
  }

  //for loop
  //for(condition){

  //}
    
  return 0;
}
