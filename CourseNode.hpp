//
//  CourseNode.hpp
//  project 1
//
//  Created by Taveon Brice on 4/7/24.
//

#ifndef CourseNode_hpp
#define CourseNode_hpp

#include <string>

using namespace std;
class CourseList;
class CourseNode {
public:
    string code;
    int creditHours;
    char grade;
    CourseNode* next;

    CourseNode(string code, int creditHours, char grade);
};

#endif /* CourseNode_hpp */
