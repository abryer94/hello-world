// Deitel "C++ How to Program -- 10th'ed." Excersice 4.12                                   
// Alex's attempt to solve chapter 4's class average problem using sentinel-controlled iteration                                                                                       
// 1/25/2018                                                                                
#include <iostream>                                                                       
#include <iomanip>                                                                          
using namespace std;                                                                        
                                                                                            
int main() {                                                                                
        // initialize                                                                       
        int total{0}; // initialization: sum                                                
    unsigned int gradeCounter{0}; // initialization: sample volume                          
                                                                                            
        // process                                                                          
        cout << "Enter grade or -1 to quit: ";                                              
        int grade;                                                                          
        cin >> grade;                                                                       
                                                                                            
        // loop until user inputs sentinel int                                              
        while (grade != -1) {                                                               
                total = total + grade;                                                      
                gradeCounter = gradeCounter +1;                                             
                                                                                           
                cout << "Enter grade or -1 to compute: ";                                   
                cin >> grade;                                                               
                                                                                            
        }                                                                                   

        // termination phase --> if user entered at least one grade                         
        if (gradeCounter != 0) {                                                            
                double average{static_cast<double>(total) / gradeCounter};                  
                // displays total and averages (2digit prec.)                               
                cout << "\nThe total of the " << gradeCounter                               
                        << " grades entered is " << total;                                  
                cout << setprecision(2) << fixed;                                           
                cout << "\nClass average is: " << average << endl;                          
                                                                                            
        }                                                                                   
                                                                                            
        else { // no input                                                                  
                cout << "No grades were entered" << endl;                                   
                                                                                            
        }                                                                                   
}  
