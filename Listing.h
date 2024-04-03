#ifndef LISTING_H
#define LISTING_H

#include <iostream>
#include "Category.h"
#include "Price.h"

    class Listing
    {
        friend std::ostream& operator<<(std::ostream& stream, const Listing& obj);
    private:
        std::string user, title, description;
        cat::Category cat;
        Price price;
    public:
        Listing( std::string user, std::string title, cat::Category cat, 
                std::string description, const Price& price);
        
        bool lessThan(Listing& listing);

        std::string getTitle(){
            return title;
        }
        
        void print();

        bool hasUser(std::string username);
        
        cat::Category getCategory() const;

        bool priceInRange(Price min, Price max) const;

        
    };
    
    
#endif