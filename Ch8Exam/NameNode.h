/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch8 exam
 */


#ifndef NAMENODE_H
#define NAMENODE_H

#include <string>

class NameNode {
public:

    /// Default constructor
    NameNode();

    /// Set name and age constructor
    NameNode(const std::string& name, int age);

    /// Print out name and age.  One line each
    void printdata();

    /// @returns The next pointer
    NameNode* getNext();

    /// Set next pointer to the node
    void setNext(NameNode* node);

    void setAge(int age);

    int getAge() const;

    void setName(const std::string& name);

    const std::string& getName() const;
 
private:

    std::string name;  // name
    int age;   // age
    NameNode* next;  // next pointer

};

#endif /* NAMENODE_H */
