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
 
template<typename T>
Vec3<T>& Vec3<T>::normalize() 
{ 
    T nor2 = length2(); 
    if (nor2 > 0) { 
        T invNor = 1 / sqrt(nor2); 
        x *= invNor, y *= invNor, z *= invNor;      
    } 
    return *this; 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator* (const T &f) const { 
    return Vec3<T>(x * f, y * f, z * f); 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator * (const Vec3<T> &v) const { 
    return Vec3<T>(x * v.x, y * v.y, z * v.z); 
} 
    
template<typename T>
T Vec3<T>::dot(const Vec3<T> &v) const { 
    return x * v.x + y * v.y + z * v.z; 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator - (const Vec3<T> &v) const { 
    return Vec3<T>(x - v.x, y - v.y, z - v.z); 
} 
    
template<typename T>
Vec3<T> Vec3<T>::operator + (const Vec3<T> &v) const { 
    return Vec3<T>(x + v.x, y + v.y, z + v.z); 
} 
    
template<typename T>
Vec3<T>& Vec3<T>::operator += (const Vec3<T> &v) { 
    x += v.x, y += v.y, z += v.z; 
    return *this; 
} 
    
template<typename T>
Vec3<T>& Vec3<T>::operator *= (const Vec3<T> &v) { 
    x *= v.x, y *= v.y, z *= v.z; 

typedef Vec3<float> Vec3f;
#endif //_VEC3_
