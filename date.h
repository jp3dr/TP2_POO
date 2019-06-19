#ifndef DATE_H
#define DATE_H

class Date {
public:
    unsigned int _day, _month, _year;
    Date(unsigned int d, unsigned int m, unsigned int y) {
        this->_day = d, this->_month = m, this->_year = y;
    };
    ~Date() {};
};

#endif // DATE_H
