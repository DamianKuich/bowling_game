// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream file;
ofstream result;
string line, address, * source;
int n = 0, l = 1, m;


int main()
{
    string line;
    ifstream myfile("rename.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            line.replace(0, 2, "PxVec3(");
            if (line[7] == '-')
            {
                line.replace(16, 1, ",");
                if (line[26] == '-')
                {
                    line.replace(25, 1, ",");
                }
                else
                {
                    line.replace(25, 1, ",");
                }
            }
            else 
            {
                line.replace(15, 1, ",");
                if (line[25] == '-')
                {
                    line.replace(23, 2, ",");
                }
                else
                {
                    line.replace(23, 2, ",");
                }
            }

            line.replace(line.length() , 0, "),");
            cout << line << '\n';
        }
        myfile.close();
    }
    else cout << "Unable to open file";
    return 0;
}