#ifndef PRICE_H
#define PRICE_H

#include <iostream>


    
    class Price
    {
    private:
        double value;
    public:
        Price(double val);
        Price();

        bool operator==(Price& p);
        bool operator<(Price& p);
        bool inRange(Price& min, Price& max) const;
        double getVal() const;
        bool setVal(double price);
        void print() const;

        friend std::ostream& operator<<(std::ostream& stream, const Price& obj);

        friend std::istream& operator>>(std::istream& stream, Price& obj);
       
    };
    
    


#endif