#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
private:
    std::string name;
    int memberId;

public:
    Member();
    Member(const std::string &name, int memberId);

    std::string getName() const;
    int getMemberId() const;

    void setName(const std::string &name);
    void setMemberId(int memberId);

    void displayMemberInfo() const;
};

#endif
