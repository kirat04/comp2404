#include "Price.h"
#include <iostream>
#include <iomanip>


Price::Price(double value){
    this->value = value;
}

Price::Price(){
    this->value = 0;
}

bool Price::operator==(Price& p){
    return this->value == p.value;
}

bool Price::operator<(Price& p){
    return this->value < p.value;
}

bool Price::inRange(Price& min, Price& max) const{
    return this->value >= min.value && this->value <=max.value;

}

void Price::print() const{
    std::cout<< "$ " << std::setprecision(2)<<this->value<<std::endl;
}

double Price::getVal() const{
    return this->value;
}

bool Price::setVal(double val) {
    this->value = val;
    return true;
}

std::ostream& operator<<(std::ostream& stream, const Price& p)
{
    stream<< "$" << std::setprecision(2)<<std::fixed<<p.value;
    
    return stream;
}

std::istream& operator>>(std::istream& stream, Price& p)
{
    std::string inputPrice;
   stream >> inputPrice;

   if(inputPrice.at(0) == '$')
   inputPrice.substr(1);

   double val = std::stod(inputPrice);

    p.setVal(val);
    return stream;
}