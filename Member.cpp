#include "Member.h"
#include <iostream>

Member::Member() : name(""), memberId(0) {}

Member::Member(const std::string &name, int memberId) : name(name), memberId(memberId) {}

std::string Member::getName() const { return name; }
int Member::getMemberId() const { return memberId; }

void Member::setName(const std::string &name) { this->name = name; }
void Member::setMemberId(int memberId) { this->memberId = memberId; }

void Member::displayMemberInfo() const {
    std::cout << "Name: " << name << "\nMember ID: " << memberId << std::endl;
}
