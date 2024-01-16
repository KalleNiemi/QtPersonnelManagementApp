#ifndef EMPLOYEES_H
#define EMPLOYEES_H

#include <QString>

namespace ns_employees{
/*
struct employeeInfo {

    QString employeeType;       //salesmen, hourlyPaid, monthlyPaid
};

struct salesmen{
    float monthlyCompensation;
    float bonusPc;
    float realizedOutcome;
    float outcomeClaim;
};

struct hourlyPaid{
    float hourlyCompensation;
    float hoursDone;
};

struct monthlyPaid{
    float monthlyCompensation;
};


}
*/
    class employees
    {
    public:
        int id;
        QString fName;
        QString sName;
        QString ssNumber;

        virtual float calculateCompensation() const = 0;
        //employees();
    };

    class monthlyPaid : public employees {
    public:
        float monthlyCompensation;

        float calculateCompensation() const override {
            // Implement calculation for monthlyPaid
        }
    };

    class hourlyPaid : public employees {
    public:
        float hourlyCompensation;
        float hoursDone;

        float calculateCompensation() const override {
            // Implement calculation for hourlyPaid
        }
    };

    class salesman : public employees {
    public:
        float monthlyCompensation;
        float bonusPc;
        float realizedOutcome;
        float outcomeClaim;

        float calculateCompensation() const override {
            // Implement calculation for salesman compensation
        }
    };
} //namespace end

#endif // EMPLOYEES_H
