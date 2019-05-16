#ifndef DATE_H
#define DATE_H

class Date {
  private:
    int year, month, day;
    void printDate() const;

  public:
    Date();
    Date(int inputYear, int inputMonth, int inputDay);
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    void compareDates(const Date& comparisonDate) const;
};

#endif
