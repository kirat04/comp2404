#ifndef FILTER_H
#define FILTER_H

#include <iostream>
#include "Category.h"
#include "Price.h"
#include "Listing.h"
   class Filter
    {
        
        public:
        virtual void print(std::ostream& ost) const;
        virtual bool matches(const Listing& listing) const;
        
        friend std::ostream& operator<<(std::ostream& stream, const Filter& obj);
    };
    
    
#endif