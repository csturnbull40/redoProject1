//
//  CourseNode.cpp
//  project 1
//
//  Created by Taveon Brice on 4/7/24.
//

#include "CourseNode.hpp"
#include <iostream>
class CourseList 
{
private:
    CourseNode* head;

public:
    CourseList();
    ~CourseList();
    void addCourse(string code, int creditHours, char grade);
    void deleteCourse(string code);
    void deleteAllNodes();
    void displayList();
};

CourseList::CourseList() {
    head = nullptr;
}

CourseList::~CourseList() {
    deleteAllNodes();
}

void CourseList::addCourse(string code, int creditHours, char grade) {
    CourseNode* newNode = new CourseNode(code, creditHours, grade);
    if (!head || head->code > code) {
        newNode->next = head;
        head = newNode;
    } else {
        CourseNode* current = head;
        while (current->next && current->next->code < code) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next;
    }
   }

   void CourseList::deleteCourse(string code) {
       CourseNode* current = head;
       CourseNode* previous = nullptr;

       while (current && current->code != code) {
           previous = current;
           current = current->next;
       }

       if (!current) {
           cout << "Course not found.";
           return;
       }

           if (!previous) {
               head = current->next;
           } else {
               previous->next = current->next;
           }

           delete current;
       }

       void CourseList::deleteAllNodes() {
           while (head) {
               CourseNode* temp = head;
               head = head->next;
               delete temp;
           }
       }

       void CourseList::displayList() {
           CourseNode* current = head;
           while (current) {
            cout << "Code " << current->code << ", Credit Hours: " << current->creditHours << ", Grade: " << current->grade;
               current = current->next;
           }
       }

