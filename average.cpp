#include<iostream>
#include<cstdlib>

using namespace std;

int main(int argc ,char *argv[])
{
    if(argc == 1)
    {
        cout << "Please input numbers to find average.";
    }
    else
    {
        cout << "---------------------------------" << endl;
        double sum;
        for(int i = 0;i<argc;i++)
        {
            sum += atof(argv[i]);
        }
        cout << "Average of " << argc + 1 << "numbers = " << sum/(double(argc) - 1) << endl; 
        cout << "---------------------------------";
    }
}