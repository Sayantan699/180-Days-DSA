#include <iostream>
#include <fstream> //header provides classes for file input and output operations

using namespace std;

int main()
{
    // Open the file
    ofstream fout;         // ofstream is a class used for writing data to a file where fout is an object
    fout.open("demo.txt"); // open is a member function

    // writing in the file
    fout << "180 days of Code...";

    fout.close(); // releasing the resources used in file handling

    // Reading the file

    ifstream fin;
    fin.open("demo.txt");

    char c;
    fin >> c;

    while (!fin.eof())
    {              // eof -> end of file i.e if the pointers points to end of file it returns 1
        cout << c; // printing the text
        fin >> c;  // traversing through the text
    }

       fin.close();
}