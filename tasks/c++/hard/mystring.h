// C++ - Hard

#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString {
    char *data;
    int len;
    
    public: 
        MyString();
        MyString(const char* s);
        MyString(const MyString& other);
        ~MyString();
    
        void append(const MyString& other);
        int length() const;
        const char* c_str() const;
        int compare(const MyString& other) const;

        MyString& operator=(const MyString& other);
        MyString operator+(const MyString& other) const;
        bool operator==(const MyString& other) const;
        friend std::ostream& operator<<(std::ostream& os, const MyString& s);

};

#endif 