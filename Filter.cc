#include "Filter.h"

        bool Filter::matches(const Listing& listing) const{
            std::cout<<"base class filter is used."<<std::endl;
            return true;
        }

                void Filter::print(std::ostream& ost) const{
            ost<<"This filter will select everything"<<std::endl;
        }
std::ostream& operator<<(std::ostream& stream, const Filter& p)
{
    p.print(stream);
    return stream;
}