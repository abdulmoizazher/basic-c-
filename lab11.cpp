#include <iostream>
#include <string>
using namespace std;


class salary
{
    private:
        float
            grossPay,
            deductions,
            netPay
        ;
    public:
        salary(): grossPay(0.0), deductions(0.0), netPay(0.0) {}
        salary(float g, float d, float n): grossPay(g), deductions(d), netPay(n) {}

        void setSalary(float g, float d, float n)
        {
            grossPay = g;
            deductions = d;
            netPay = n;
        }

        friend ostream &operator << (ostream &obj, const salary s)
        {
            obj << "\tGross Pay: " << s.grossPay << endl;
            obj << "\tDeductions: " << s.deductions << endl;
            obj << "\tNet Pay: " << s.netPay;

            return obj;
        }
};

class date
{
    private:
        int
            day,
            month,
            year
        ;
    public:
        date(): day(0), month(0), year(0) {}
        date(int d, int m, int y): day(d), month(m), year(y) {}

        void setDate(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }

        friend ostream &operator <<(ostream &obj, const date d)
        {
            obj << "\t" << d.day << "-" << d.month << "-" << d.year;

            return obj;
        }
};

class employee
{
    private:
        int empID;
        string name;
        salary sal;
        date date;

    public:
        employee(): sal(), date()
        {
            empID = 0;
            name = "";

        }

        employee(int id, string _name, float g, float d, float n, int _date, int m, int y): sal(g, d, n), date(_date, m, y)
        {
            empID = id;
            name = _name;

        }

        void setData(int id, string _name, float g, float d, float n, int _date, int m, int y)
        {
            sal.setSalary(g, d, n);
            date.setDate(_date, m, y);
            empID = id;
            name = _name;
        }

        friend ostream &operator<<(ostream &obj, const employee e)
        {
            obj << "Employee ID: " << e.empID << endl;
            obj << "Employee name: " << e.name << endl;
            obj << "Employee salary details: " << endl << e.sal << endl;
            obj << "Employee joining date" << endl << e.date;

            return obj;
        }

};

int main()
{   employee E(1, "Test User", 5.5, 1.75, 20.25, 12, 2, 2021);

    cout  << E;

    return 0;
}
