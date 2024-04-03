#ifndef PRICE_FILTER_H
#define PRICE_FILTER_H

#include <iostream>
#include "Category.h"
#include "Price.h"
#include "Listing.h"
#include "Filter.h"
    class Price_Filter : virtual public Filter
    {
        protected:
        Price min, max;

        public:
        Price_Filter(Price min, Price max);
        
        virtual bool matches(const Listing&) const override;

        virtual void print(std::ostream& ost) const override ;
        
    };
    
    
#endif