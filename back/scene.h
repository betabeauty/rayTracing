#ifndef _SCENE_
#define _SCENE_
#include "vec3.h"

class Scene{
public:
    Vec3f surfaceColor, emissionColor; /// surface color and emission (light) 
    Vec3f emissionLoc;
    float transparency, reflection;    /// surface transparency and reflectivity 
    
    virtual bool intersect(const Vec3f &rayorig, const Vec3f &raydir, float &t0, float &t1) const{}
    virtual Vec3f getNormal(const Vec3f &phit) const{}
};
#endif //_SCENE_
