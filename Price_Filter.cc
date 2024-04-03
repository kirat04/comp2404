#include "Price_Filter.h"
Price_Filter::Price_Filter(Price min, Price max){
    this->min = min;
    this->max = max;
}
bool Price_Filter::matches(const Listing& listing) const{
    return listing.priceInRange(this->min,this->max);
}

void Price_Filter::print(std::ostream& ost) const{
ost<<"This filter matches listings in the price range ";
ost<< this->min;
ost<<" to ";
ost<<this->max;
}