#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H
#include <iostream>


namespace space_age {

namespace constants{
    const double mercury = 0.2408467;
    const double venus = 0.61519726 ;
    const double mars = 1.8808158;
    const double jupiter = 11.862615;
    const double saturn = 29.447498;
    const double uranus = 84.016846;
    const double neptune = 164.79132;
    const double seconds_a_year = 31557600;
}

class space_age
{
    public:
       
        space_age(double seconds)
        { m_seconds = seconds;}
        double seconds() const 
        { return m_seconds; }
        double on_earth() const
        { return seconds() / constants::seconds_a_year; }
        double on_mercury()  const
        { return on_earth() / constants::mercury; }
        double on_venus() const
        { return on_earth() / constants::venus; }
        double on_mars() const
        { return on_earth() / constants::mars; }
        double on_jupiter() const
        { return on_earth() / constants::jupiter; }
        double on_saturn() const
        { return on_earth() / constants::saturn; }
        double on_uranus() const
        { return on_earth() / constants::uranus;}
        double on_neptune() const
        { return on_earth() / constants::neptune; }
    private:
        double m_seconds;


};
}      

#endif // SPACE_AGE_H