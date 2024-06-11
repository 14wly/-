//
// Created by Administrator on 2024/6/11.
//

#ifndef CPP_PRACTICE_MYSTRING_H
#define CPP_PRACTICE_MYSTRING_H

#include <iostream>
#include <cstring>


class MyString {
public:
    //构造和析构
    MyString();
    MyString(const char* p);
    MyString(const MyString& obj);
    ~MyString();
    //普通成员函数
    const char* c_str() const;
    int length();//获取字符串的长度
    //操作符重载，友元函数
    friend std::ostream& operator<<(std::ostream& cout, MyString& obj);
    friend void operator>>(const char* str, MyString& obj);
    // =, [] 重载
    MyString& operator=(const MyString& obj);
    MyString& operator=(const char* p);
    char& operator[](int index);
    //重载+=、+
    MyString& operator+=(MyString& str);
    MyString& operator+=(const char* s);
    MyString operator+(MyString& str);
    MyString operator+(const char* str);
    // ==, != 重载
    bool operator==(const char* p);
    bool operator!=(const char* p);
    bool operator==(MyString& obj);
    bool operator!=(MyString& obj);
private:
    char* pAddress;
    int mLength;
};


#endif //CPP_PRACTICE_MYSTRING_H
