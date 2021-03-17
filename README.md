# Friendly Accessible Color Translator

## Description

This program so far stores color blindness friendly colors that the user prefers, and will later use those colors to create a friendlier palette to replace a website's original colors if those colors are not color blind friendly. Alternatively, this program may hold folders of color palettes specifically catered to various color blindness such as protanopia and deuteranopia, the most common forms of color blindness. The user can then select the color palette most useful to them.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Daniel Espinoza-Cardenas

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:
```
Please enter a color palette file to be opened:
protanopia.txt
Could not open protanopia.txt
```
Note: Program not working as intended, as protanopia.txt should have been opened

## C++ Guide

### Variables and Data Types

string color
  -User's input for the color they want

string filename
  -Used so user can access individual colors or color palettes

fstream reader
  -Used to read and write files, so user can add or remove colors and/or color palettes

string line
  -Used so program can find a specific color within a color palette file


!!!Replace with a summary and examples of how multiple variables have been used with a variety of data types and why they have been used effectively and appropriately!!!

### Console Input and Output
The program asks the user to select a color palette to use by typing in the name of the color palette file. If the user inputs an existing file name, the program will confirm the file is accessed. The first example of this is:
```
cout << "Please enter a color palette file to be opened:\n";
  cin >> filename;

  cout << line << " has been selected.\n" << endl
```

### Decisions
An if decision is used to grab a color or set of colors from a color palette as long as a file was actually opened and there is still content present in the file to access. An else statement is used in the event that the user entered a file name that does not exist in the program. 
```
if(reader.is_open()){
    while(!reader.eof()){
      getline(reader,line);
     }
    reader.close();
  } 
  else{
    cout << "Could not open " << filename << endl;
  }

```

### Iteration
A while loop is used within the if statement to determine how long the program should read the file that was accessed. As long as there is still content, in this case individual colors, in the file to be read, the program will read it.
```
while(!reader.eof()){
      getline(reader,line);
     }
    reader.close();
```
!!!Replace with a summary and examples of how iteration has been used effectively and appropriately!!!

### File Input and Output
The fstream library  and fstream reader are being used so that the program can read and write files. By extension, the user can access the existing color palettes, as well as add or remove colors from the color palette files.
```
#include <fstream>
```
```
fstream reader
```
So far, two color palette folders are available, each with four colors that are friendly to red/green color blindness, protanopia and deuteranopia, respectively.


### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
