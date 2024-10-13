#include "OOP1.h"

int main()
{
    // Assignment1
    cout << "Assignment 1 ------------------------------------------------------\n";

    Fraction a, b;

    do
    {
        cout << "Enter fraction a (numerator first, denominator second): ";
        a.inputF();
        if (!a.isFraction()) cout << "a is invalid!\n";
    } while (a.isFraction() == 0);

    cout << "Fraction a: ";
    a.printF1(); cout << " = "; a.printF2(); cout << endl;

    do
    {
        cout << "Enter fraction b (numerator first, denominator second): ";
        b.inputF();
        if (!b.isFraction()) cout << "b is invalid!\n";
    } while(b.isFraction() == 0);

    cout << "Fraction b: ";
    b.printF1(); cout << " = "; b.printF2(); cout << endl;
    Fraction c;

    cout << "Result of a + b: ";
    c = a.add(b); c.printF1(); cout << " = "; c.printF2(); cout << endl;

    cout << "Result of a - b: ";
    c = a.subtract(b); c.printF1(); cout << " = "; c.printF2(); cout << endl;

    cout << "Result of a * b: ";
    c = a.multiple(b); c.printF1(); cout << " = "; c.printF2(); cout << endl;

    cout << "Result of a / b: ";
    c = a.divide(b); c.printF1(); cout << " = "; c.printF2(); cout << endl;

    // Assignment2
    cout << "Assignment 2 ------------------------------------------------------\n";
    
    Date x;
    cout << "Enter your date (dd/mm/yy) (date x): ";
    x.input();
    
    cout << "Your date is: "; x.output(); cout << endl;

    cout << "Your date after increase 1 day: "; x.increase1day(); x.output(); cout << endl;

    cout << "Enter the number of days you want to increase: ";
    int n; cin >> n;
    cout << "Your date after increase " << n << " days: "; x.increaseNdays(n); x.output(); cout << endl;
    
    cout << "Your date after decrease 1 day: "; x.decrease1day(); x.output(); cout << endl;

    cout << "Enter the number of days you want to decrease: ";
    cin >> n;
    cout << "Your date after decrease " << n << " days: "; x.decreaseNdays(n); x.output(); cout << endl;

    Date y;
    cout << "Enter another date (date y): ";
    y.input();

    int result = x.compare(y);
    if (result == 1) cout << "Date x is newer than date y!\n";
    else if (result == 0) cout << "Date x is equal to date y!\n";
    else cout << "Date x is older than date y!\n";

    // Assignment3
    cout << "Assignment 3 ------------------------------------------------------\n";
    Point I, J;

    cout << "Enter your first point (point I): ";
    I.input();
    cout << "Your point: I"; I.output(); cout << endl;

    cout << "Enter your second point (point J): ";
    J.input();
    cout << "Your point: J"; J.output(); cout << endl;

    cout << "The distance from I to J is " << I.distance(J) << endl;

    // Assignment4
    cout << "Assignment 4 ------------------------------------------------------\n";

    Rectangle r;

    cout << "Enter your rectangle: ";
    cout << "Enter the points:\n";
    r.input();

    int checkRect = r.checkValid();
    if (checkRect)
    {
        cout << "Is a rectangle!\n";
        cout << "Your rectangle: "; r.output(); cout << endl;
        cout << "The circum of your rectangle: " << r.circum() << endl;
        cout << "The area of your rectangle: " << r.area() << endl;
    }
    else cout << "Is not a rectangle!\n";

    // Assignment5
    cout << "Assignment 5 ------------------------------------------------------\n";

    Student s;
    cout << "Enter the grades of student: "; s.input();
    cout << "The average grade: " << s.averageGrade() << endl;
    if (s.checkGood())
    {
        cout << "Is a good student!\n";
    }
    else cout << "Is not a good student!\n";
    cout << "-------------------------------------------------------------------\n";

    cout << "Press Enter to escape.";
    cin.ignore();
    cin.get();
    return 0;
}
