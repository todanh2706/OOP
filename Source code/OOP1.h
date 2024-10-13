#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Fraction
{
    public:
        int n, d;
        Fraction();
        void inputF();
        void printF1();
        void printF2();
        bool isFraction();
        Fraction add(Fraction b);
        Fraction subtract(Fraction b);
        Fraction multiple(Fraction b);
        Fraction divide(Fraction b);
    private:
};

class Date 
{
    public:
        int d, m, y;
        int days[13] = {-1, 31, -1, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        void input();
        void output();
        void increase1day();
        void increaseNdays(int n);
        void decrease1day();
        void decreaseNdays(int n);
        int compare(Date y);
    private:

};

class Point 
{
    public:
        double x, y;
        void input();
        void output();
        double distance(Point y);

    private:

};

class Rectangle
{
    public:
        Point d1, d2, d3, d4;
        void input();
        void output();
        bool checkValid();
        double circum();
        double area();
    private:

};

class Student
{
    public:
        double mGrade, eGrade, pGrade;
        void input();
        double averageGrade();
        bool checkGood();
    private:


};