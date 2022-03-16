#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char ch;
    
	ifstream infile;
    
	int sany=0;
    
    infile.open("example.txt", ios::in);
    
    ch = infile.get();
    
	while (ch != EOF)
    {
        if (ch == '.' || ch== '!' || ch=='?')
        {
            sany = sany + 1;
        }
        ch = infile.get();
        
    }
    cout<<"Soilemder sany: "<<sany;
    
 return 0;
}
