#include "OOP1.h"

void Fraction::inputF()
{
    cin >> this->n >> this->d;
}

void Fraction::printF1()
{
    cout << this->n << "/" << this->d;
}

void Fraction::printF2()
{
    cout << fixed << setprecision(4) << 1.00 * this->n / this->d;
}

bool Fraction::isFraction ()
{
    return this->d != 0;
}

Fraction::Fraction()
{
    this->n = 1;
    this->d = 0;
}

Fraction Fraction::add (Fraction b)
{
    Fraction c;
    c.n = this->n * b.d + this->d * b.n;
    c.d = this->d * b.d;

    return c;
}

Fraction Fraction::subtract (Fraction b)
{
    Fraction c;
    c.n = this->n * b.d - this->d * b.n;
    c.d = this->d * b.d;

    return c;
}

Fraction Fraction::multiple (Fraction b)
{
    Fraction c;
    c.n = this->n * b.n;
    c.d = this->d * b.d;

    return c;
}

Fraction Fraction::divide (Fraction b)
{
    Fraction c;
    c.n = this->n * b.d;
    c.d = this->d * b.n;

    return c;
}

void Date::input()
{
    cin >> this->d >> this->m >> this->y;
    this->days[0] = this->y;

    if (this->y % 4 == 0 || (this->y % 100 == 0 && this->y % 400 == 0)) this->days[2] = 29;
    else this->days[2] = 28; 
}

void Date::output()
{
    cout << this->d << "/" << this->m << "/" << this->y;
}

void Date::increase1day()
{
    // this->d++;

    // if ((this->m == 1 || this->m == 3 || this->m == 5 || this->m == 7 || this->m == 8 || this->m == 10 || this->m == 12) && this->d > 31)
    // {
    //     this->m++;
    //     this->d = 1;
    // }
    // else if ((this->m == 2) && (this->y % 4 == 0 || (this->y % 100 == 0 && this->y % 400 == 0)) && this->d > 29)
    // {
    //     this->m++;
    //     this->d = 1;
    // }
    // else if ((this->m == 2) && this->d > 28)
    // {
    //     this->m++;
    //     this->d = 1;
    // }
    // else if (this->d > 30)
    // {
    //     this->m++;
    //     this->d = 1;
    // }

    // if (this->m > 12)
    // {
    //     this->y++;
    //     this->m = 1;
    // }

    this->d++;

    if (this->d > this->days[this->m])
    {
        this->m++; this->d = 1;
        if (this->m > 12)
        {
            this->m = 1;
            this->y++;        
            if (this->y % 4 == 0 || (this->y % 100 == 0 && this->y % 400 == 0)) this->days[2] = 29;
            else this->days[2] = 28; 
        }
    }
}

void Date::increaseNdays(int n)
{
    while (1)
    {
        if (n > this->days[this->m] - this->d)
        {
            n -= (this->days[this->m] - this->d + 1);
            this->d = 1; this->m++;
            if (this->m > 12)
            {
                this->y++;
                if (this->y % 4 == 0 || (this->y % 100 == 0 && this->y % 400 == 0)) this->days[2] = 29;
                else this->days[2] = 28;
                this->m = 1;
            }
        }
        else if (n > 0)
        {
            this->d += n;
            n = 0;
        }
        if (n == 0) break;
    }
}

void Date::decrease1day()
{
    this->d--;
    if (d < 1) 
    {
        this->m--;
        if (this->m < 1)
        {
            this->y--;
            this->m = 12;
            if (this->y % 4 == 0 || (this->y % 100 == 0 && this->y % 400 == 0)) this->days[2] = 29;
            else this->days[2] = 28;
        }
        d = this->days[this->m];
    }
}


void Date::decreaseNdays(int n)
{
    while (1)
    {
        if (n > d)
        {
            n -= d;
            this->m--;
            if (m < 1)
            {
                this->y--;
                this->m = 12;
                if (this->y % 4 == 0 || (this->y % 100 == 0 && this->y % 400 == 0)) this->days[2] = 29;
                else this->days[2] = 28;
            }
            d = this->days[this->m];
        }
        else if (n > 0)
        {
            d -= n;
            n = 0;
        }
        if (n == 0) break;
    }
}

int Date::compare(Date y)
{
    if (this->y > y.y) return 1;
    else if (this->y < y.y) return -1;
    else
    {
        if (this->m > y.m) return 1;
        else if (this->m < y.m) return -1;
        else
        {
            if (this->d > y.d) return 1;
            else if (this->d < y.d) return -1;
            else return 0;
        }
    }
}

void Point::input()
{
    cin >> this->x >> this->y;
}

void Point::output()
{
    cout << "(" << this->x << ", " << this->y << ")";
}

double Point::distance(Point b)
{
    return sqrt((this->x - b.x) * (this->x - b.x) + (this->y - b.y) * (this->y - b.y));
}

void Rectangle::input()
{
    cout << "d1(x1, y1): ";
    cin >> d1.x >> d1.y;
    cout << "d2(x2, y2): ";
    cin >> d2.x >> d2.y;
    cout << "d3(x3, y3): ";
    cin >> d3.x >> d3.y;
    cout << "d4(x4, y4): ";
    cin >> d4.x >> d4.y;
}

void Rectangle::output()
{
    cout << "d1: (" << d1.x << ", " << d1.y << "); d2: (" << d2.x << ", " << d2.y << "); d3: (" << d3.x << ", " << d3.y << "); d4: (" << d4.x << ", " << d4.y << ")";
}

struct Vector
{
    double x, y;
};

bool Rectangle::checkValid()
{
    double dis1 = d1.distance(d2), dis2 = d2.distance(d3), dis3 = d3.distance(d4), dis4 = d4.distance(d1);

    if (dis1 != dis3 || dis2 != dis4)
    {
        return 0;
    }

    Vector v1 {d1.x - d2.x, d1.y - d2.y}, v2 {d2.x - d3.x, d2.y - d3.y}, v3 {d3.x - d4.x, d3.y - d4.y}, v4 {d4.x - d1.x, d4.y - d1.y};

    if (!(v1.x * v2.x + v1.y * v2.y == 0 && v2.x * v3.x + v2.y * v3.y == 0 && v3.x * v4.x + v3.y * v4.y == 0 && v4.x * v1.x + v4.y * v1.y == 0)) {
        return 0;
    }

    return 1;
}

double Rectangle::circum()
{
    return (d1.distance(d2) + d2.distance(d3)) * 2;
}

double Rectangle::area()
{
    return d1.distance(d2) * d2.distance(d3);
}

void Student::input()
{
    cin >> mGrade >> eGrade >> pGrade;
}

double Student::averageGrade()
{  
    return (mGrade + eGrade + pGrade) / 3;
}

bool Student::checkGood()
{
    if (mGrade < 6.5 || eGrade < 6.5 || pGrade < 6.5 || averageGrade() <= 8)
    {
        return 0;
    }

    return 1;
}