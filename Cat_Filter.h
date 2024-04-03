#ifndef CAT_FILTER_H
#define CAT_FILTER_H

#include "Filter.h"
#include "Category.h"



    class Cat_Filter : virtual public Filter
    {
        protected:
        cat::Category category;

        public:
        Cat_Filter(const cat::Category&);

        bool matches(const Listing&) const override;

        void print(std::ostream& ost) const override;
        
    };
    
    
#endif