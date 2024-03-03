// CS300 Project 2.cpp 
//Julia Coronado
// Dr. Webb



#include <iostream>  // adding needed dependencies 
#include <vector>
#include<fstream>
#include <algorithm>
#include <string>
#include <sstream>


using namespace std;

double strDouble(string str, char ch);

struct Course {                      // creating structure to hold course information and to access in later portions of application
    string courseNum;
    string courseName;
    int preReqs;

    Course() {
    }


   
};

vector<Course> course; 
    ifstream MyReadFile("ABCU Program Input.txt");  // filestream to open and have text file available
    
     
    
    
   








    int main(int argc, char* argv[]) {






        cout << "Welcome To ABCU Course Advisor" << endl;  // creating a menu to allow users to select desired function

        string courseName;

        int choice = 0;
        while (choice !=9) {
            cout << "Menu:" << endl;
            cout << " 1. Load Data Structure" << endl;
            cout << " 2. Print Course List" << endl;
            cout << " 3. Print Course" << endl;
            cout << " 4. Exit Program " << endl;

            cout << "Enter choice: ";
            cin >> choice;
            
            if (choice == 2) {
                cout << "Loading Class Data" << endl;
                void readIn(ifstream & infile, vector<Course> &vec); {
                    int a, count = 0;
                    std::ifstream inputFile("ABCU Program Input.txt");  // Opening the data file 

                    if (inputFile.is_open()) {  // Checking if the file was successfully opened
                        std::string line;  // Declaring a string variable to store each line of text

                        while (std::getline(inputFile, line)) {  // Loop through each line in the file
                            // Display each line on the console
                            std::cout << line << std::endl;  // Output the content of 'line' to the console
                        }

                        inputFile.close();  // Closing the file after reading
                    }
                    if (
                        std::cout << "Failed to open file." << std::endl); // Display an error message if file opening failed














                    else if (choice == 3) {                  // creating a section where user should be able to select a course to learn more about requirements
                        cout << "what would you like to do" << endl;
                        cout << "What course do you want to know about" << endl;
                        cin >> courseName;

                        for (unsigned int i = 0; i < course.size(); ++i) {
                            cout << course[i].courseNum << "," << course[i].courseName << endl;
                        }
                    
                    
                     
                        
                        
                        
                        
                        
                        if (choice == 4) {          // The following section will allow the user to end the application with a farewell message
                        cout << "What would you like to do?" << endl;

                        cout << "Thank you for using ABCU course advisor" << endl;
                        cout << "Good bye." << endl;


                        if ((choice < 1) || (choice >= 4))
                            cout << "Error.\n";


                    }


                    
                    }













                    















                    }

                }



            }
        }
    
    
    
   
    



double strDouble(string str, char ch);

double strDouble(string str, char ch)
{
    return 0.0;
}
