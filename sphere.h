#ifndef _SPHERE_
#define _SPHERE_
#include "vec3.h"
#include "scene.h"

class Sphere : public Scene
{ 
public: 
    Vec3f center;                      /// position of the sphere 
    Vec3f emissionLoc;
    float radius, radius2;             /// sphere radius and radius^2 
    Vec3f surfaceColor, emissionColor; /// surface color and emission (light) 
    float transparency, reflection;    /// surface transparency and reflectivity 
    Sphere( 
        const Vec3f &c, 
        const float &r, 
        const Vec3f &sc, 
        const float &refl = 0, 
        const float &transp = 0, 
        const Vec3f &ec = 0) : 
        center(c), emissionLoc(c), radius(r), radius2(r * r), surfaceColor(sc), emissionColor(ec), 
        transparency(transp), reflection(refl) 
    { /* empty */ } 
    
    //Compute a ray-sphere intersection using the geometric solution
    bool intersect(const Vec3f &rayorig, const Vec3f &raydir, float &t0, float &t1) const ;
    Vec3f getNormal(const Vec3f &phit) const;
     
};

#endif //_SPHERE_
