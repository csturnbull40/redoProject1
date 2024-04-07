//
//  main.cpp
//  project 1
//
//  Created by Taveon Brice on 4/7/24.
//

#include <iostream>
#include <string>
#include "CourseNode.cpp"
#include "CourseNode.hpp"
using namespace std;

int main() {
    CourseList list;
    for (int i = 0; i < 10; ++i) {
        string code;
        int creditHours;
        char grade;
        
        cout << "Enter course code: ";
        cin >> code;
        cout << "Enter credit hours: ";
        cin >> creditHours;
        cout << "Enter grade: ";
        cin >> grade;
        
        list.addCourse(code, creditHours, grade);
    }
    
    
    cout << "List before deletion:" << endl;
    list.displayList();
    
    
    for (int i = 0; i < 2; ++i) {
        string code;
        cout << "Enter course code to delete: ";
        cin >> code;
        list.deleteCourse(code);
        
        // Display list after deletion
        cout << "List after deletion:" << endl;
        list.displayList();
    }
    return 0;
   }
