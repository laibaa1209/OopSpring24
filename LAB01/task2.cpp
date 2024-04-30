/*Programmer:Laiba bint-e-Zia
ID=23k-0006
Date:25th jan 2024 
*/

#include <iostream>

using namespace std;

char calculateGrade(float average) {
	
    if (average >= 90) {
    	
        return 'A';
        
    } else if (average >= 80) {
    	
        return 'B';
        
    } else if (average >= 70) {
    	
        return 'C';
        
    } else if (average >= 60) {
    	
        return 'D';
        
    } else {
    	
        return 'F';
        
    }
}

int main() {
	
    int numStudents;
    
    cout << "Enter the number of students: ";
    cin >> numStudents;

    float mathMarks[numStudents];
    float englishMarks[numStudents];
    float scienceMarks[numStudents];

    for (int i = 0; i < numStudents; ++i) {
    	
        cout << "\nEnter marks for student " << i + 1 << ":\n";
        
		cout << "Mathematics: ";
        cin >> mathMarks[i];
       
	    cout << "English: ";
        cin >> englishMarks[i];
       
	    cout << "Science: ";
        cin >> scienceMarks[i];
        
    }

    for (int i = 0; i < numStudents; ++i) {
        
		float total = mathMarks[i] + englishMarks[i] + scienceMarks[i];
        float average = total / 3.0;

      
	    cout << "\nStudent " << i + 1 << ":\n";
        cout << "Mathematics: " << mathMarks[i] << "\n";
	    cout << "English: " << englishMarks[i] << "\n";
        cout << "Science: " << scienceMarks[i] << "\n";
        cout << "Total: " << total << "\n";
        cout << "Average: " << average << "\n";
        cout << "Grade: " << calculateGrade(average) << "\n";
   
    }

    return 0;
}

