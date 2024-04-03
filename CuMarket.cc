#include "CuMarket.h"
using namespace std;

CuMarket::CuMarket(){

}

CuMarket::~CuMarket(){

}

void CuMarket::addListing(const string userName, const string title, cat::Category category, const string description, Price price){
    if(this->listings.isFull())
    cout<<"Error: CuMarket has reached maximum number of listings."<<endl;
    else{
        

        this->listings+= new Listing(userName,title,category,description,price);
    }
}

void CuMarket::removeListing(const string title){
    for(int i = 0; i<this->listings.getSize();i++){
        if(this->listings[i]->getTitle().compare(title) == 0 ){
            this->listings -= this->listings[i];
            return;
        }
    }
    cout<<"Error: No Listing found"<<endl;
}

void CuMarket::searchListings(Filter f, List<Listing*>& searchList){
        for(int i = 0; i<this->listings.getSize();i++){
        if(f.matches(*this->listings[i]) ){
            searchList+= this->listings[i];
        }
    }

}