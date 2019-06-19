#ifndef DATE_H
#define DATE_H

class Date {
public:
    unsigned int _dia, _mes;
    Date(unsigned int d, unsigned int m) {
        this->_dia = d, this->_mes = m;
    };
    ~Date() {};
};

#endif // DATE_H
