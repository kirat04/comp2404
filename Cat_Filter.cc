#include "Cat_Filter.h"

Cat_Filter::Cat_Filter(const cat::Category& c){
this->category = c;
}
bool Cat_Filter::matches(const Listing& listing) const{

    return listing.getCategory() == this->category;
}

void Cat_Filter::print(std::ostream& ost) const{
ost<<"This filter matches listings with the category " << cat::categoryToString(this->category);
}