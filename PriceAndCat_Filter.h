#ifndef PRICEANDCAT_FILTER_H
#define PRICEANDCAT_FILTER_H

#include <iostream>
#include "Category.h"
#include "Price.h"
#include "Listing.h"
#include "Filter.h"
#include "Price_Filter.h"
#include "Cat_Filter.h"
    class PriceAndCat_Filter : public Price_Filter, public Cat_Filter
    {
        private:

        public:
        PriceAndCat_Filter(Price min, Price max, cat::Category category);
        virtual bool matches(const Listing&) const override;

        void print(std::ostream& ost) const;
        
    };
    
    
#endif