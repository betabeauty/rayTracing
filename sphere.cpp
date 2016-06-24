#include "sphere.h"
#include <cmath>

bool Sphere::intersect(const Vec3f &rayorig, const Vec3f &raydir, float &t0, float &t1) const 
{ 
        Vec3f l = center - rayorig; 
        float tca = l.dot(raydir); 
        if (tca < 0) return false; 
        float d2 = l.dot(l) - tca * tca; 
        if (d2 > radius2) return false; 
        float thc = sqrt(radius2 - d2); 
        t0 = tca - thc; 
        t1 = tca + thc; 
 
        return true; 
} 

Vec3f Sphere::getNormal(const Vec3f &phit) const
{
    return phit - center;
}
