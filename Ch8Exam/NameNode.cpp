/*
 * Copyright 2023
 * Created by Andrew Suyer
 * Ch8 exam
 */

#include "NameNode.h"

#include <iostream>


NameNode::NameNode() :
    name(), age(0), next(nullptr)
{}


NameNode::NameNode(const std::string& name, int age) :
    name(name), age(age), next(nullptr)
{

}


void NameNode::printdata()
{
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}


NameNode *NameNode::getNext()
{
    return next;
}


void NameNode::setNext(NameNode *node)
{
    this->next = node;
}


void NameNode::setAge(int age)
{
    this->age = age;
}


int NameNode::getAge() const
{
    return age;
}


void NameNode::setName(const std::string& name)
{
    this->name = name;
}


const std::string& NameNode::getName() const
{
    return name;
}
