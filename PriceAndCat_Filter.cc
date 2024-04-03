#include "PriceAndCat_Filter.h"

PriceAndCat_Filter::PriceAndCat_Filter(Price min, Price max, cat::Category category) : Price_Filter(min,max), Cat_Filter(category){

}

bool PriceAndCat_Filter::matches(const Listing& listing) const{
    return Price_Filter::matches(listing) && Cat_Filter::matches(listing);               
}

void PriceAndCat_Filter::print(std::ostream& ost) const{
ost<<"This filter matches listings with the category ";
ost << cat::categoryToString(this->category);
ost<< " and with prices from ";
ost<< this->min;
ost<<" to ";
ost<<this->max;
        }