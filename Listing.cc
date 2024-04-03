
#include <iostream>
#include "Listing.h"
#include <iomanip>

Listing::Listing( std::string user, std::string title, cat::Category cat, 
                 std::string description, const Price& price){
    this->user = user;
    this->title = title;
    this->cat = cat;
    this->description = description;
    this->price = price;

}


bool Listing::lessThan(Listing& listing){
    return this->title.compare(listing.title)<0;
}

void Listing::print(){
    std::cout<< std::setw(16)<<std::left<<"User:"<<this->user<<std::endl;
    std::cout<< std::setw(16)<<"Title:"<<this->title<<std::endl;
    std::cout<< std::setw(16)<<"Category:"<<cat::categoryToString(this->cat)<<std::endl;
    std::cout<< std::setw(16)<<"Description:"<<this->description<<std::endl;
    std::cout<< std::setw(16)<<"Price:"<<"$"<<std::fixed<<std::setprecision(2)<<this->price.getVal()<<std::endl;
}


bool Listing::hasUser(std::string username){
    return this->user.compare(username) ==0;
}

cat::Category Listing::getCategory() const{
    return this->cat;
}

bool Listing::priceInRange(Price min, Price max) const{
    return this->price.inRange(min,max);
}

std::ostream& operator<<(std::ostream& stream, const Listing& p)
{
    stream<< std::setw(16)<<std::left<<"User:"<<p.user<<std::endl;
    stream<< std::setw(16)<<"Title:"<<p.title<<std::endl;
    stream<< std::setw(16)<<"Category:"<<cat::categoryToString(p.cat)<<std::endl;
    stream<< std::setw(16)<<"Description:"<<p.description<<std::endl;
    stream<< std::setw(16)<<"Price:"<<"$"<<std::fixed<<std::setprecision(2)<<p.price.getVal()<<std::endl;
    return stream;
}