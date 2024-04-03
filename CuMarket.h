#ifndef CUMARKET_H
#define CUMARKET_H

#include <iostream>
#include "List.h"
#include "Listing.h"
#include "Category.h"
#include "Price.h"
#include "Filter.h"
#include "Price_Filter.h"
#include "Cat_Filter.h"
#include "PriceAndCat_Filter.h"

using namespace std;
   class CuMarket
    {
        private:
        List<Listing*> listings;

        public:
        CuMarket();
        ~CuMarket();

        void addListing(const string userName, const string title, cat::Category category, const string description, Price price);

        void removeListing(const string title);

        void searchListings(Filter f, List<Listing*>& searchList);
    };
    
    
#endif