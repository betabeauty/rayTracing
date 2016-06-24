#ifndef _VEC3_
#define _VEC3_
#include <ostream>

template<typename T> 
class Vec3 
{ 
public: 
    T x, y, z; 
    Vec3() : x(T(0)), y(T(0)), z(T(0)) {} 
    Vec3(T xx) : x(xx), y(xx), z(xx) {} 
    Vec3(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {} 
    Vec3& normalize() ;
    Vec3<T> operator * (const T &f) const ; 
    Vec3<T> operator * (const Vec3<T> &v) const ; 
    T dot(const Vec3<T> &v) const ; 
    Vec3<T> operator - (const Vec3<T> &v) const ; 
    Vec3<T> operator + (const Vec3<T> &v) const ;
    Vec3<T>& operator += (const Vec3<T> &v) ; 
    Vec3<T>& operator *= (const Vec3<T> &v) ; 
    Vec3<T> operator - () const ; 
    T length2() const ; 
    T length() const ; 
    std::ostream& operator << (std::ostream &os) ; 
}; 
 
typedef Vec3<float> Vec3f;

#endif //_VEC3_
