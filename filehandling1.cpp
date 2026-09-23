#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("studentdet.txt");

    if (!fin)
    {
        cout << "\nThere was an error in opening the file.";
    }
    else
    {
        int roll_no, marks;
        string name;

        // Read the FIRST record
        fin >> roll_no >> name >> marks;

        // Make first record the reference
        int maxRoll = roll_no;
        int maxMarks = marks;
        string maxName = name;

        int minRoll = roll_no;
        int minMarks = marks;
        string minName = name;

        // Display first record
        cout << "\nRoll Number: " << roll_no
             << "\tName: " << name
             << "\tMarks: " << marks;

        // Read remaining records
        while (fin >> roll_no >> name >> marks)
        {
            cout << "\nRoll Number: " << roll_no
                 << "\tName: " << name
                 << "\tMarks: " << marks;

            // Check for maximum
            if (marks > maxMarks)
            {
                maxMarks = marks;
                maxRoll = roll_no;
                maxName = name;
            }

            // Check for minimum
            if (marks < minMarks)
            {
                minMarks = marks;
                minRoll = roll_no;
                minName = name;
            }
        }

        cout << "\n\n========== RESULT ==========";

        cout << "\n\nMaximum Marks:";
        cout << "\nRoll Number: " << maxRoll;
        cout << "\nName: " << maxName;
        cout << "\nMarks: " << maxMarks;

        cout << "\n\nMinimum Marks:";
        cout << "\nRoll Number: " << minRoll;
        cout << "\nName: " << minName;
        cout << "\nMarks: " << minMarks;

        fin.close();
    }

    return 0;
}
