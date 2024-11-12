#include "precision.h"
#include <math.h>

#ifndef VECTORS_H
#define VECTORS_H

/** Type Definitions **/

typedef struct {
    real x;
    real y;
    real z;
}Vector3;

typedef struct {
    real x;
    real y;
}Vector2;

/** Vector3 Init Functions **/
Vector3 v3_zero();
Vector3 v3_one();

/** Vector3 Math Functions **/

Vector3 v3_invert(Vector3 vec); // Inverts the sign of all elements of a Vector3.
Vector3 v3_normalize(Vector3 vec); // Normalizes a Vector3.
Vector3 v3_scale(Vector3 vec, real value); // Scales a Vector3 by the given value.

Vector3 v3_add(Vector3 vec1, Vector3 vec2); // Adds 2 Vector3s together.
Vector3 v3_sub(Vector3 vec1, Vector3 vec2); // Subtracts 2 vec2 from vec1.
Vector3 v3_addScaledVector(Vector3 vec1, Vector3 vec2, real value); // Adds vec2 scaled by value to vec1.

Vector3 v3_componentProduct(Vector3 vec1, Vector3 vec2); // Returns the component pro
real v3_dotProduct(Vector3 vec1, Vector3 vec2);
Vector3 v3_vectorProduct(Vector3 vec1, Vector3 vec2);

real v3_magnitude(Vector3 vec); // Returns the magnitude of a Vector3.
real v3_squareMagnitude(Vector3 vec); // Returns the square magnitude of a Vector3.

#endif